///Definire un vettore di interi di 10 elementi, caricare il vettore con un valore che per ogni posizione è pari all'indice+2

#include<iostream>
#define N 10
using namespace std;

int main(){
        int vett[N];
        for(int i=0; i<N; i++){      ///for(int i=10; i>0; i--) carico il vettore dall'ultima posizione alla prima
                vett[i]=i+2;
                cout<<vett[i]<<" ";
        }

        return 0;
}
