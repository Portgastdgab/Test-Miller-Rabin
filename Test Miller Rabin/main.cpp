#include <iostream>
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

int main() {
    /*ZZ num =  ZZ(0);
    for(int ct = 0; ct<1000; ct++){
        int cont = 0;
        for(ZZ num = ZZ(100); num < ZZ(1000); num += ZZ(1)){
            if (millerRabinTest(num,ZZ(ct))){
                //cout<<num<< " is prime "<<endl;
                cont++;
            }
            else{
                //cout<<num<< " not prime "<<endl;
            }
        }
        if(cont == 143){
            cout<<ct<<", ";
        }
    }*/
    cout<<"Primos del 100 al 1000: "<<endl;
    for(ZZ num = ZZ(100); num < ZZ(1000); num += ZZ(1)){
        if (millerRabinTest(num,ZZ(571))){
            cout<<num<< ", ";
        }
        else{
            //cout<<num<< " not prime "<<endl;
        }
    }

}
