#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int lli;
int main(){

    int i,j,n,g,a,arr[20],gen[20],b[20],q[20],x[20],check=0,s;
    cout << "Comprobacion de redundancia ciclica\n";
    cout << "\nIntroduce la cantidad de bits de datos del dividendo: ";
    cin >> n;
    cout << "\nIngresa los datos con un espacio cada uno\n";
    for(i=0;i<n;i++) cin >> arr[i];
    cout << "\nIntroduce la cantidad de bits del divisor : ";
    cin >> g;
    do{
        cout << "\nIngresa los datos con un espacio cada uno \n";
        for(j=0;j<g;j++) cin >> gen[j];
    }while(gen[0]!=1);
    system("cls");
    cout << "\nEl divisor es: ";
    for(j=0;j<g;j++) cout << gen[j];
    a=n+(g-1);
    cout << "\nLos datos de lado del transmisor: ";
    for(i=0;i<j;++i) arr[n+i]=0;
    for(i=0;i<a;++i) cout << arr[i];
    for(i=0;i<n;++i) q[i]= arr[i];
    for(i=0;i<n;++i){
        if(arr[i]==0){
            for(j=i;j<g+i;++j)
                arr[j] = arr[j]^0;
        }
        else{
            // XOR ^
            arr[i] = arr[i]^gen[0];
            arr[i+1]= arr[i+1]^gen[1];
            arr[i+2]= arr[i+2]^gen[2];
            arr[i+3]= arr[i+3]^gen[3];
        }
    }
    cout << "\nCRC: ";
    for(i=n;i<a;++i) cout << arr[i];
    for(i=0;i<g-1;++i)
        x[i]=arr[i];
    s=n+a;
    for(i=n;i<s;i++)
        q[i]=arr[i];
    cout << "\n";
    for(i=0;i<a;i++) cout << q[i];
    printf("\n\n");
    system("pause");
    return 0;
}

