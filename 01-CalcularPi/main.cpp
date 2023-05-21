#include <iostream>

using namespace std;

int potencia (int a, int b){
    int producto = 1;
    for (int i = 0; i < b; i++){
        producto = producto * a;
    }
    return producto;
}

float calculoPi(int n){
    float pi = 0;
    float denominador = 0;
    float numerador = 0;
    float division;
    long long int i = 0;
    do{
        numerador = potencia(-1, i);
        denominador = 2*i + 1;
        division = numerador / denominador;
        pi += 4 * division;
        i++;
    }while (i < n);
    return pi;
}

int main()
{
    float pi= 0;
    long long int n = 0;
    int d;
    cout << "Ingrese el numero de iteraciones que desea realizar: " << endl;
    cin >> n;
    cout << "Ingrese el numero de decimales que desea ver: " << endl;
    cin >> d;
    pi = calculoPi(n);
    cout.precision(d+1);
    cout << "Luego de " << n << " iteraciones, el valor de pi en sus primeros " << d << " decimales es de: " << pi << endl;
    
    return 0;
}
