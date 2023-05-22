#include <iostream>

using namespace std;

int potencia (int a, int b){
    int producto = 1;
    for (int i = 0; i < b; i++){
        producto = producto * a;
    }
    return producto;
}

float calculoPi(int &n){
    float pi = 3.141592;
    float pi1 = 0;
    float denominador = 0;
    float numerador = 0;
    float division;
    do{
        numerador = potencia(-1, n);
        denominador = 2*n + 1;
        division = numerador / denominador;
        pi1 += 4 * division;
        n++;
    }while (pi != pi1);
    return pi1;
}

int main()
{
    int n = 0;
    float pi = calculoPi(n);
    cout.precision(7);
    cout << "Luego de " << n << " iteraciones, el valor de pi en sus primeros 6 decimales es de: " << pi << endl;
    
    return 0;
}
