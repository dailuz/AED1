#include <iostream>
#include "funciones.h"
#include <vector>
using namespace std;


// AUX SWAP

void swap (int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}


// INSERTION SORT

vector <int> insertionSort(vector <int> vec){
	int i = 1;

	while (i < vec.size()){
		while ((vec[i] < vec[i-1]) && i > 0){
			swap(vec[i],vec[i-1]);
			i--;
		}
		i++;
	}

	return vec;
}


// SELECTION SORT

vector <int> selectionSort (vector <int> vec){

	int i = 0;
	int j;

	while (i < vec.size()){
		j = i+1;
		while (vec[i] <= vec[j] && j < vec.size()){
			j++;
		}

		if (vec[i] > vec[j]){
			swap (vec[i],vec[j]);
			i--;
		}
		i++;
	}


	return vec;
}


// BUBBLE SORT

vector <int> bubbleSort (vector <int> vec){
	int j;
	int i = 0;

	while (i < vec.size()-1){
		j = 0;
		while (j < vec.size()-1){
			if (vec[j] > vec[j+1]){
				swap(vec[j],vec[j+1]);
			}
			j++;
		}
		i++;
	}

	return vec;
}


// COUNTING SORT

vector <int> countingSort (vector <int> vec){
	vector <int> result;
	vector <int> cantidades;
	int i = 0;

	for (int j = 0; j <= 20; j++){
		cantidades.push_back (0);
	}

	while (i < vec.size()){
		cantidades[vec[i]]++;
		i++;
	}

	for (int j = 0; j <= 20; j++){
		if (cantidades[j]>0){
			int k = 1;
			while (k <= cantidades[j]){
				result.push_back(j);
				k++;
			}
		}
	}

	return result;
}


// BINARY SEARCH

bool binarySearch (vector <int> vec, int e){
	int desde = 0;
	int hasta = vec.size()-1;
	while (vec[(hasta+desde)/2] != e && (desde < hasta)){
		if (vec[(hasta+desde)/2] < e){
			desde = (hasta+desde+1)/2;
		}else{
			hasta = (hasta+desde)/2;
		}
	}
	return (e == vec[(hasta+desde)/2]);
}
