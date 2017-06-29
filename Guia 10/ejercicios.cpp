#include <iostream>
#include "ejercicios.h"
#include <vector>
using namespace std;


// EJERCICIO 1

int determinante (vector <vector <int> > mat){
	int result = 1;
	for (int i = 0; i < mat.size(); i++){
		result = result * mat[i][i];
	}
	return result;
}


// EJERCICIO 2

vector <vector <int> > matrizTranspuesta (vector <vector <int> > mat){
	int aux;
	for (int i = 0; i < mat.size(); i++){
		for (int j = 0; j < i; j++){
			if (i != j){
				aux = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = aux;
			}
		}
	}
	return mat;
}


vector <vector <int> > productoEntreMatrices (vector <vector <int> > mat1, vector <vector <int> > mat2){
	vector <vector <int> > result;
	int aux;
	for (int i = 0; i < mat1.size(); i++){
		vector <int> aux2;
		for (int j = 0; j < mat1.size(); j++){
			aux = 0;
			for (int k = 0; k < mat1.size(); k++){
				aux = aux + mat1[i][k]*mat2[k][j];
			}
			aux2.push_back (aux);
		}
		result.push_back (aux2);
	}
	return result;
}


vector <vector <int> > productoDeMatrizConSuTranspuesta (vector <vector <int> > mat){
	vector <vector <int> > transpuesta = matrizTranspuesta (mat);
	vector <vector <int> > result = productoEntreMatrices(mat,transpuesta);
	return result;
}


// EJERCICIO 6

vector <vector <int> > promedio4celdasAdyacentes (vector <vector <int> > mat){
	vector <vector <int> > result;
	int i = 0;
	int j = 0;
	int aux;
	vector <int> aux2;
	while (i < mat.size()){
		j = 0;
		while (j < mat.size()){
			aux = (mat[i][j] + mat[i+1][j] + mat[i][j+1] + mat[i+1][j+1]) / 4;
			j = j + 2;
			aux2.push_back(aux);
		}
		result.push_back(aux2);
		i = i + 2;
		for (int k = 0; k < mat.size()/2; k++){
			aux2.pop_back();
		}
	}
	return result;
}
