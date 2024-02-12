#include <iostream>
using namespace std;

int main(){


int tamañovector;
cout << "Ingrese la cantidad de numeros";
cin >> tamañoVector;

int vector1[];
int vector2[];

int sumaVectorDos = 0;
int sumaVector = 0;

cout << "Diligencie el primer vector";
for (int i = 0; i < tamañovector; i++)
{
int numero = 0;
cout << "Ingrese el primer numero" << i;
cin >> numero;
sumaVector[i] = numero;
sumaVector += numero;
}

cout << "ingrese el segundo numero ";
for (int i = 0; i < tamañovector; i++)
{
int numero = 0;
cout << "Ingrese el segundo numero " << i;
cin >> numero;
sumaVectorDos[i] = numero;
sumaVectorDos += numero;
}

    return 0;
}