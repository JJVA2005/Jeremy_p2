#include <iostream>
using namespace std;
int num_1=0 , num_2=0;// aqui pngo el valor de los numeros/
int resultado_1,resultado_2;//aqui pongo la variable de los resultados/
int main() {//aqui le expliuco al usuario que hay que poner un numero/
cout<<"escriba el num 1: ";
cin>> num_1;
cout<<"escriba el num 2: ";
cin>> num_2;
resultado_1=num_1+num_2;// aqui pongo el resultado/
cout<<" el resultado de x + y es: "<< resultado_1 ; 
resultado_2=num_1-num_2;
cout<<"\n el resultado de x - y es: "<< resultado_2 ;
}