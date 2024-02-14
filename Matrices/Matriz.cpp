#include <iostream>
using namespace std;

int main(){

char calculadora [5][3] 

//Fila 1
calculadora [0][0] = "1";
calculadora [0][1] = "2";
calculadora [0][2] = "3";

//Fila 2
calculadora [1][0] = "4";
calculadora [1][1] = "5";
calculadora [1][2] = "6";

//Fila 3
calculadora [2][0] = "7";
calculadora [2][1] = "8";
calculadora [2][2] = "9";

//Fila 4
calculadora [3][0] = "+";
calculadora [3][1] = "0";
calculadora [3][2] = "-";

//Fila 5
calculadora [4][0] = "x";
calculadora [4][1] = "=";
calculadora [4][2] = "√";

for (int i = 0; i <5; i++){

    for (int j = 0; j <5; j++){

        cout << calculadora [i][j];
}
    cout <<"\n";
}





return 0;

}