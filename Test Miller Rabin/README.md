Miller-Rabin: Es la prueba de primalidad más utilizada, también conocida como la prueba de pseudoprimos más fuerte.

Se basa en lo siguiente:

    Sea n un número primo impar y sea
    𝑛 − 1 = 2 𝑠𝑟,
    donde r es impar y para cualquier entero 𝑎 que cumpla:
    𝑚𝑐𝑑 (𝑎, 𝑛) = 1y también 𝑎 ^𝑟 𝑚𝑜𝑑 𝑛 ≡ 1o 𝑎 ^(2^𝑗) 𝑟𝑚𝑜𝑑 𝑛 ≡− 1
    para algún j , 0 ≤ 𝑗 ≤ 𝑠 − 1.
    Si se cumple lo anteriormente mencionado, 𝑛 se considera un pseudoprimo fuerte en base
    a 𝑎[1].
    Si 𝑎 ^𝑟 𝑚𝑜𝑑 𝑛 ≠ 1y 𝑎 ^(2^𝑗) r𝑚𝑜𝑑 𝑛 ≠ 1para todo j, 0 ≤ 𝑗 ≤ 𝑠 − 1, entonces 𝑎 es un
    sólido testimonio que prueba definitivamente que 𝑛es un número compuesto.
    
    
Seguimiento: 

    𝑛 = 101 , 𝑎 = 5
    𝑛 − 1 = 2 ^s 𝑟
    100 = 2 ^2 25 → 𝑠 = 2, 𝑟 = 25
    𝑎 ^r 𝑚𝑜𝑑 𝑛 ≡ 1 𝑜𝑟 𝑎 ^(2^𝑗) 𝑟𝑚𝑜𝑑 𝑛 ≡ − 1 , 0 ≤ 𝑗 ≤ 𝑠 − 1.
    5^25𝑚𝑜𝑑 101 = 1 ← 𝐶𝑜𝑟𝑟𝑒𝑐𝑡, 101 𝑒𝑠 𝑝𝑟𝑖𝑚𝑜
