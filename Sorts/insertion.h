#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED

using namespace std;
#include "util.h"

void insertionSort( int *vet, int n ){

    int i, key;
    for(int j=1; j<=n; j++)
    {
        key = vet[j];
        i= j-1;
        while( i>=0 && vet[i]>key ){
            vet[i+1] = vet[i];
            i--;
        }
        vet[i+1] = key;
    }

}

#endif // INSERTION_H_INCLUDED
