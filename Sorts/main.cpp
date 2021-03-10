#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "bubble.h"
#include "insertion.h"
#include "util.h"
#include "time.h"
#include "quick.h"
#include "heap.h"

using namespace std;




int main()
{

    int n, range;
    time_t time0, time1;
    cout<<"\nN: ";
    cin>>n;
    cout<< "Range: ";
    cin>>range;

    int *temp = geraVet(n, range);

    int *vet = new int[n];

    copiaVet(temp, vet, n);
    cout<<"\n\n INICIANDO HEAPSORT\n";
    //cout<< "Antes da ordenacao:"<<endl;
    //mostraVet(vet, n);
    Heap h;
    h.inicializa(vet, n);
    //h.buildHeapMax();
    //h.viewHeap();
    time(&time0);
    h.heapSort();
    //h.viewHeap();
    time(&time1);
    cout<< "\nTempo Heapsort: " << time1-time0;

    copiaVet(temp, vet, n);
    cout<<"\n\n INICIANDO QUICKSORT\n";
    cout<< "Antes da ordenacao:"<<endl;
    mostraVet(vet, n);
    time(&time0);
    quicksort(vet, 0, n-1);
    time(&time1);
    cout<< "\nTempo quicksort: " << time1-time0;
    mostraVet(vet, n);



    ///INSERTION SORT
    copiaVet(temp, vet, n);
    cout<<"\n\n INICIANDO INSERTION SORT\n";
    cout<< "Antes da ordenacao:"<<endl;
   // mostraVet(vet, n);
    time(&time0);
    insertionSort(vet, n);
    time(&time1);
    cout<< "\nTempo Insertion sort: " << time1-time0;
    //mostraVet(vet, n);

    copiaVet(temp, vet, n);
    cout<<"\nINICIANDO BUBBLE SORT"<<endl;
    cout<< "Antes da ordenacao:"<<endl;
    //mostraVet(vet, n);
    ///BUBBLE SORT
    time(&time0);
    bubbleSort(vet, n);
    time(&time1);
    cout<< "Depois da ordenacao:"<<endl;
    //mostraVet(vet, n);

    cout<<"Tempo bubble sort: "<< time1-time0 <<endl;

    return 0;
}
