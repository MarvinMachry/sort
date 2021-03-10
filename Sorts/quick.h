#ifndef QUICK_H_INCLUDED
#define QUICK_H_INCLUDED

#include "util.h"


int particiona( int *a, int p, int r ){
    int x = a[r];
    int i = p-1;


    for( int j=p; j < r; j++ )
        if( a[j] <= x ){
            i++;
            troca( &a[i], &a[j] );
        }
    troca( &a[i+1], &a[r] );
    return i+1;
}

void quicksort( int *a, int p, int r ){
    if( p < r ){
        int q = particiona( a, p, r );
        quicksort( a, p, q-1 );
        quicksort( a, q+1, r );
    }




}





#endif // QUICK_H_INCLUDED
