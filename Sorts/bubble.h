#ifndef BUBBLE_H_INCLUDED
#define BUBBLE_H_INCLUDED
#include "util.h"

using namespace std;

void troca( int *orig, int *dest )
{
    int temp = *orig;
    *orig = *dest;
    *dest = temp;
}


void bubbleSort(int *vet, int n)
{
    bool flag;

    do{
        flag = false;
        for(int i=0; i<n-1; i++){
            if( vet[i+1] < vet[i] ){
                troca( &vet[i+1], &vet[i] );
                flag = true;
               // mostraVet(vet, n);
            }
        }


    }while(flag);
}


#endif // BUBBLE_H_INCLUDED
