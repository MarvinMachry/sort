#include<iostream>
using namespace std;

void insertion_sort(std::vector<int> &vetor) {

    for (int i = 1; i < vetor.size(); i++) {
		int escolhido = vetor[i];
		int j = i - 1;

		while ((j >= 0) && (vetor[j] > escolhido)) {
			vetor[j + 1] = vetor[j];
			j--;
		}

		vetor[j + 1] = escolhido;
	}
}

main(){
    int vet[10] = {1, 3, 5, 4, 8, 6, 7, 8, 9, 4};
    int tam = 10;
    void
    void
    insertion_sort(std::vector<int>& vetor)
}
