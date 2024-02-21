#include <iostream>
#include <cmath>

//FUNCION FACTORIAL DE UN NUMERO
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


//FUNCION DE SERIE FIBANACCI
void fibonacci(int n) {
    int t1 = 0, t2 = 1, siguiente;

    std::cout << "Serie de Fibonacci hasta el termino " << n << ":\n";
    std::cout << t1 << " " << t2 << " ";

    for (int i = 3; i <= n; ++i) {
        siguiente = t1 + t2;
        std::cout << siguiente << " ";
        t1 = t2;
        t2 = siguiente;
    }
    std::cout << std::endl;
}


//FUNCION SI UN NUMERO ES PRIMO O NO
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}


//FUNCION SI UN NUMERO ES PAR O NO
bool esPar(int numero) {
    return numero % 2 == 0;
}


//FUNCION PARA MOSTRAR LA TABLA DE MULTIPLICAR DE UN NUMERO
void tablaMultiplicar(int numero) {
    std::cout << "Tabla de multiplicar del " << numero << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }
}

int main() {
    using namespace std;

    //PRIMER EJERCICIO

    //TABLA DE MULTIPLICAR DEL 4
    cout << "Tabla de multiplicar del 4:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "4 x " << i << " = " << 4 * i << endl;
    }

    //TABLA DE MULTIPLICAR DEL 6
    cout << "\nTabla de multiplicar del 6:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "6 x " << i << " = " << 6 * i << endl;
    }



    //SEGUNDO EJERCICIO

    //CALCULAR EL FACTORIAL
    int numero;
    cout << "\nCalcular el factorial de su numero ingresado. Ingrese un numero: ";
    cin >> numero;
    int resultadoFactorial = factorial(numero);
    cout << "El factorial de " << numero << " es: " << resultadoFactorial << endl;



    //TERCER EJERCICIO

    //SERIE FIBONACCI
    int n;
    cout << "\nSerie Fibonacci. Ingrese un numero: ";
    cin >> n;
    fibonacci(n);



    //CUARTO EJERCICIO

    //SI EL NUMERO ES PRIMO O NO
    cout << "\nVamos a verficar si su numero es primo o no. Ingrese un numero: ";
    cin >> numero;
    if (esPrimo(numero)) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }



    //QUINTO EJERCICIO

    //SI NUMERO ES PAR O NO
    cout << "\nVerificaremos si su numero es par o no. Ingrese un numero: ";
    cin >> numero;
    if (esPar(numero)) {
        cout << numero << " es par." << endl;
    } else {
        cout << numero << " no es par." << endl;
    }



    //SEXTO EJERCICIO

    //TABLA DE MULTIPLICAR DE UN NUMERO
    cout << "\nMostraremos la tabla de multiplica de un numero. Ingrese un numero : ";
    cin >> numero;
    tablaMultiplicar(numero);

    return 0;
}
