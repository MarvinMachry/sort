#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED
using namespace std;

int * geraVet( int n, int range ){
     int *temp = new int[n];

    for(int i=0; i<n; i++)
        temp[i] = rand() % range+1;
    return temp;

}

void copiaVet(int *orig, int *dest, int tam)
{
    for(int i=0; i<tam; i++)
        dest[i] = orig[i];
}

void mostraVet(int *vet, int tam){
    cout<<endl;
    for(int i=0; i<tam; i++){
        cout<< vet[i]<<" ";
    }
    cout << endl;
}

#endif // UTIL_H_INCLUDED

