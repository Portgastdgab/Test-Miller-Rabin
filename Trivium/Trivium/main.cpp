#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <NTL/ZZ.h>

using namespace std;
using namespace NTL;


ZZ module(ZZ a, ZZ n){
    ZZ r = a-n*(a/n);
    r = r+(r<0)*n;
    return r;
}

ZZ modPow(ZZ a ,ZZ n,ZZ m){

	ZZ exp (1);
	ZZ x = module(a,m);

	while(n>0){
		if(module(n, ZZ(2)) == 1)
			exp = module(exp*x,m);
		x = module(x*x,m);
		n>>=1;
	}
	return exp;
}

ZZ RandomNumber(ZZ init,ZZ end) {
	ZZ k = end - init + 1;
	ZZ num = RandomBnd(k)+init;
	return num;
}

bool millerRabinTest(ZZ number, ZZ iter)
{
	// Casos Base
	if(module(number,ZZ(2))== 0) return false;
	if (number <= 1 || number == 4)  return false;
	if (number <= 3) return true;

	// number-1 = 2^d * r ; r >= 1
	ZZ d = number - 1;

	//Hallar  el exponente d
	while (module(d,ZZ(2)) == 0)
		d >>= 1;


	// Iterar
	for (ZZ i (0); i < iter; i++){

		// obtener un numero random en [2..n-2]
		ZZ a = RandomNumber(ZZ(2),number-2);

		// X =  a^d mod( n)
		ZZ x = modPow(a, d, number);

		if (x == 1  || x == number-1)
			return true;

		while (d != number-1)
		{
			x= module(x*x,number);
			//x= x*x % n;
			d <<=1;

			if (x == 1)   return false;
			if (x == number-1)  return true;
		}
		return false;
	}

	return true;
}


class Trivium{

private:
    int s[288];
    int IV[80],key[80];
    int t1,t2,t3;
    int bits;
    ZZ base10;

    void generate_Key_and_IV(){
        for(int i=0;i<80;i++){
            ZZ ran(rand());
            IV[i]=to_int(module(ran,ZZ(2)));
            key[i]=to_int(module(ran,ZZ(2)));
        }
    }

    void rotate(){
        for(int j=93;j>=1;--j)
            s[j]=s[j-1];
        for(int j=177;j>=94;--j)
            s[j]=s[j-1];
        for(int j=288;j>=178;--j)
            s[j]=s[j-1];
        s[0]=t3;  s[93]=t1;  s[177]=t2;
    }


    void init(){
        generate_Key_and_IV();

        for(int i=0;i<288;i++) s[i]= 0;

        for(int i=0;i<80;++i){
            s[i]=key[i];
            s[i+93]=IV[i];
        }
        for(int i=285;i<288;++i) s[i]=1;

        //rotate
        for(int i=1;i<1152;i++){
            t1 = ((s[65] ^ (s[90] & s[91]) )^ s[92] )^ s[170];
            t2 = ((s[161] ^ (s[174] & s[175]) )^ s[176] )^ s[263];
            t3 = ((s[242] ^ (s[285] & s[286]) )^ s[287] )^ s[68];
            rotate();
        }
    }
public:
    ZZ keyStream(){
        ZZ z(0);
        base10 =0;
        for(int i=0;i<bits;i++){

            t1 = s[65] ^ s[92];
            t2 = s[161] ^ s[176];
            t3 = s[242] ^ s[287];

            z = t1 ^ t2 ^ t3;

            t1 ^= s[90] ^ s[91] & s[170] ;
            t2 ^= s[174] ^ s[175] & s[263] ;
            t3 ^= s[285] ^ s[286] & s[68] ;
            rotate();
            base10 += z<<i;
        }

        return z;
    }


    Trivium(int bits){
        this ->bits = bits;
        init();
    }

    ZZ PseudoRandom(){
        ZZ n;
        do{
            n = keyStream();
        }while(countBits(base10)!=bits);

        return base10;
    }

    int countBits(ZZ n){
        int count =0;
        while(n != 0){
            count++;
            n>>=1;
        }
        return count;
    }

    /*double entropy(){
        double uno=0,zero=0,total=0;
        for(int i=0;i<bits;i++){
            ZZ bit ( keyStream());
            if(bit == 1) uno++;
            else zero ++;
            total++;
        }
        double p1= uno/total;
        double p2= zero/total;
        return -p1 * log2(p1) - p2* log2(p2);
    }*/

};




int main() {


	srand(time(0));
    int bits = 10;

    ZZ random_num;
    Trivium test(bits);
    for(int i = 0; i<100; ){
        random_num = test.PseudoRandom();
        if (millerRabinTest(random_num, ZZ(188))){
            cout<<i+1<<"th prime: "<<random_num<<"\t\t";
            if((i+1)%7 == 0){
                cout<<endl<<endl;
            }
            i++;
        }
    }


    //ENTROPIA - TEST
    //cout<<"\nEntropy: "<<test.entropy();



    //cout<<"\nbits: "<<test.countBits(n);

    cout<<endl;



}
