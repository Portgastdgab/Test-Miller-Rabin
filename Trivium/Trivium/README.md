Para la generación de numeros aleatorios se llevo a uso el algoritmo TRIVIUM

Definición:

    TRIVIUM es un algoritmo de encriptación simétrica creado por Christophe De Canniere y
    Bart Preneel para el proyecto eSTREAM el cual se llevó a cabo entre los años 2004 y 2008.
    El algoritmo TRIVIUM está diseñado especialmente para ser implementado fácilmente en
    hardware, es altamente paralelizable y de licencia libre . TRIVIUM es un algoritmo de
    cifrado de tipo Stream Cipher, esto quiere decir que es capaz de generar un keystream de
    tamaño 2⁶⁴ bits a partir de una llave privada de 80 bits y de un vector inicial de 80 bits. El
    algoritmo de cifrado se divide en dos partes; la inicialización del estado interno y la
    generación del keystream. El estado interno está formado por 288 bits.
    
    
El proceso de inicialización del estado interno s consiste en los siguientes pasos:

    ● Se copia la llave secreta K a las primeras 80 localidades del estado interno y se
    asigna cero a las localidades de 81 a 93 : (𝑆1, 𝑆2, 𝑆3,..., 𝑆93) ← (𝐾1, 𝐾2,..., 𝐾80 , 0,.., 0)
    
    ● Se copia el vector inicial IV a las localidades 94 a 173 del estado interno y se asigna
    a cero a las localidades 174 a 177: (𝑆94, 𝑆95, 𝑆96,..., 𝑆177) ← (𝐼𝑉1, 𝐼𝑉2,..., 𝐼𝑉80 , 0,.., 0)
    
    ● Se asigna cero a las localidades 178 a 285 y uno a las localidades 286,287 y 288 del
    estado interno: (𝑆178, 𝑆179, 𝑆180,..., 𝑆288) ← (0,... , 0, 1, 1, 1)
    
Seguimiento:
  
    TRIVIUM es un diseño orientado al hardware que se centra en la flexibilidad .Pretende ser
    compacto en entornos con restricciones en el recuento de puertas, energéticamente
    eficiente en plataformas con recursos de energía limitados y rápido en aplicaciones que
    requieren cifrado de alta velocidad.
    En el corazón de Trivium hay tres registros de desplazamiento, A, B y C. Las longitudes de
    los registros son 93, 84 y 111, respectivamente. La suma XOR de las tres salidas de registro
    forma el flujo de claves si. Una característica específica del cifrado es que la salida de cada
    registro está conectada a la entrada de otro registro. Por tanto, los registros están
    dispuestos en forma de círculo. Se puede considerar que el cifrado consta de un registro
    circular con una longitud total de 93 + 84 + 111 = 288. Cada uno de los tres registros tiene
    una estructura similar a la que se describe a continuación.
