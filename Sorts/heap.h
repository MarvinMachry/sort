#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED
#include "util.h"

using namespace std;


struct Heap
{
    int *A;
    int tam;

    void inicializa(int *vet, int tamanho)
    {
        A = vet;
        tam = tamanho;
    }

    int heapParent( int i )
    {
        return (i-1)/2;
    }

    int heapLeft(int i)
    {
        return 2*i +1;
    }

    int heapRight(int i)
    {
        return 2*i + 2;
    }

    void maxHeapify(int i)
    {
        int l = heapLeft(i);
        int r = heapRight(i);
        int maior = -1;

        if( l < tam && A[l] > A[i] )
            maior = l;
        else
            maior = i;
        if( r < tam && A[r] > A[maior])
            maior = r;
        if(maior != i){
            troca(&A[i], &A[maior]);
            maxHeapify(maior);
        }
    }

    void buildHeapMax( ){
        for( int i= tam/2; i>=0; i-- )
            maxHeapify(i);
    }

    void viewHeap(){
        cout<<endl<< "Heap:\n ";
        for(int i=0; i<tam; i++ )
        {
            cout << A[i]<< " ";
        }
        cout<<endl;
    }

    void heapSort(){
        buildHeapMax();
        int t = tam;
        for( int i= tam-1; i>=1; i-- )
        {
            troca(&A[0], &A[i]);
            tam--;
            maxHeapify(0);
        }
        tam = t;
    }



};





#endif // HEAP_H_INCLUDED
