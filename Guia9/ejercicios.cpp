#include <iostream>
#include "ejercicios.h"
#include <vector>
using namespace std;


/*********************************
 1ER PARTE: SECUENCIAS DE ENTEROS
*********************************/

// EJERCICIO 1

vector <int> mesetaMasLarga (vector <int> vec){
	vector <int> result;
	int desde = 0;
	int hasta = 0;
	int i = 0;
	int mesetaMaxima = 0;
	int mesetaValor = 0;
	bool hayMeseta;
	int largoMeseta;

	while (i < vec.size()-1){
		desde = i;
		hayMeseta = false;
		while (vec[i] == vec[i+1] && i < vec.size()-1){
			i++;
			hayMeseta = true;
		}
		if (hayMeseta){
			hasta = i;
			i--;
			largoMeseta = hasta - desde + 1;
			if (largoMeseta > mesetaMaxima){
				mesetaMaxima = largoMeseta;
				mesetaValor = vec [hasta];
			}
		}
		i++;
	}

	i = 1;
	while (i <= mesetaMaxima){
		result.push_back(mesetaValor);
		i++;
	}

	return result;
}


// EJERCICIO 2
/*
vector <vector <int> > secuenciaDeSecuencia (int n){
	vector <vector <int> > result;

	for (int i = 0; i < 10^n; i++){

	}

	return result;
}
*/


// EJERCICIO 3

vector <int> infrasecuenciaMasLarga (vector <int> vec){
	vector <int> result;
	int longMasLarga = 0;
	int desde = 0;
	int hasta = 0;
	int i = 0;
	int desdeValor = 0;
	bool hayInfrasecuencia = false;

	while (i < vec.size()-1){
		hayInfrasecuencia = false;
		desde = i;
		desdeValor = vec[desde];
		while (vec[i] <= vec[i+1] && i < vec.size()-1){
			i++;
			hayInfrasecuencia = true;
		}
		if (hayInfrasecuencia){
			hasta = i;
			longMasLarga = hasta - desde;
		}
		i++;
	}

	i = 1;
	while (i <= longMasLarga){
		result.push_back(vec[desdeValor]);
		desdeValor++;
		i++;
	}

	return result;
}


// EJERCICIO 4

vector <pair <int, int> > productoCartesiano (vector <int> vec, vector <int> vec2){
	vector <pair <int, int> > result;
	int i = 0;
	int j;

	while (i < vec.size()){
		j = 0;
		while (j < vec2.size()){
			result.push_back(make_pair(vec[i],vec2[j]));
			j++;
		}
		i++;
	}
	return result;
}


// AUX PERTENECE

bool pertenece (vector <int> vec, int e){
	bool pert = false;

	for (int i = 0; i < vec.size(); i++){
		if (vec[i] == e){
			pert = true;
		}
	}

	return pert;
}


// EJERCICIO 5

int distanciaDeHamming (vector <int> vec1, vector <int> vec2){
	int result = 0;
	for (int i = 0; i < vec1.size(); i++){
		if (vec1[i] != vec2[i]){
			result++;}
		}
	}
	return result;
}


// EJERCICIO 6

int quickSelect (vector<int> vec, int k){
	vector <int> minimos;
	int min = vec[0];
	int indiceMin = 0;
	int max = vec[0];
	int i = 1;

	for (int j = 0; j < vec.size(); j++){
		if (vec[j] > max){
			max = vec[j];
		}
	}

	if (k <= vec.size()){
		while (i < k){
			for (int j = 0; j < vec.size(); j++){
				if (vec[j] < min){
					min = vec [j];
					indiceMin = j;
				}
			}
			vec[indiceMin] = max;
			min = max;
			i++;
		}
		for (int j = 0; j < vec.size(); j++){
			if (vec[j] < min){
				min = vec [j];
			}
		}
	}

	return min;
}


// AUX SUMA

int sumar (vector <int> vec, int desde, int hasta){
	int suma = 0;
	for (int i = desde; i <= hasta; i++){
		suma = suma + vec[i];
	}}
	return suma;
}


// EJERCICIO 7

int indiceSumasIguales (vector <int> vec){

	int i = 0;

	while (sumar(vec,0,i-1) != sumar (vec,i+1,vec.size()-1) && i < vec.size()-1){
		i++;
	}

	return i;
}


// EJERCICIO 8

vector < vector <int> > compresionDeSecuencias (vector <int> vec){
	vector <vector <int> > result;
	int i = 0;
	int desde;
	int cont;

	while (i < vec.size()){
		vector <int> aux;
		desde = vec[i];
		cont = 1;
		while (i < vec.size() -1 && vec[i] + 1 == vec[i+1]){
			i++;
			cont++;
		}
		aux.push_back(desde);
		aux.push_back(cont);
		result.push_back(aux);
		i++;

	}

	return result;
}


/*********************************
       2DA PARTE: STRINGS
*********************************/

// EJERCICIO 9

bool esSubsecuencia (string s1, string s2){

	int i = 0;
	int j = 0;

	if (s1.size() < s2.size()){
		while (i < s2.size() && j < s1.size()){
			j = 0;
			if (s2[i] == s1[j]){
				while (i < s2.size() && j < s1.size() && s1[j] == s2[i]){
					j++;
					i++;
				}
				i--;
			}
			i++;
		}
	}

	return j == s1.size();
}}


//  EJERCICIO 10

string subsecComunMasLarga (string s1, string s2){
	string result ="";
	int i = 0;
	int j = 0;
	int cont;
	int masLarga = 0;

	while (i < s1.size()){
		j = 0;
		while (j < s2.size()){
			if (s1[i] == s2[j]){
				cont = 0;
				string aux="";
				while (s1[i] == s2[j] && i < s1.size() && j < s2.size()){
					aux = aux + s1[i];
					i++;
					j++;
					cont++;
				}
				if (cont > masLarga){
					result = aux;
					masLarga = cont;
				}
			}
			i++;
			j++;
		}
		i++;
	}


	return result;
}


// EJERCICIO 11

string substringL (string s, int l){
	string result = "";
	char minimo = s[0];
	int indiceMin = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] < minimo && s.size()-i >= l){
			minimo = s[i];
			indiceMin = i;
		}
	}

	for (int i = indiceMin; i < indiceMin + l; i++){
		result = result + s[i];
	}

	return result;
}


// EJERCICIO 12

string ordenInverso (string s){
	string result="";
	string aux = "";

	for (int i = s.size()-1; i >= 0; i--){
		if (s[i] != '#'){
			aux = aux + s[i];
		}else{
			for (int j = i; j >= 0; j--){
				result = result + aux[j];
			}
			result = result + s[i];
			aux = "";
		}
	}
	for (int j = aux.size()-1; j >= 0; j--){
		result = result + aux[j];
	}

	return result;
}


// EJERCICIO 13

vector <string> justificar (vector <string> vec){
	vector <string> result;
	int i;
	int cantNumeralesAlFinal;
	string aux;
	int cantPalabras;
	int cantNumeralesAAgregar;
	int h;

	for (int j = 0; j < vec.size(); j++){
		i = vec[j].size() - 1;
		cantNumeralesAlFinal = 0;
		cantPalabras = 0;
		aux = "";
		while (vec[j][i] == '#' && i >= 0){
			cantNumeralesAlFinal++;
			i--;
		}
		for (int k = 0; k < vec[j].size() - 1 - cantNumeralesAlFinal; k++){
			if (vec[j][k] == '#'){
				cantPalabras++;
			}
		}

		cantNumeralesAAgregar = cantNumeralesAlFinal / cantPalabras;

		for (int k = 0; k < vec[j].size() - 1; k++){
			if (vec[j][k] != '#'){
				aux = aux + vec [j][k];
			}
			if (vec[j][k] == '#' && vec[j][k+1] != '#'){
				h = 0;
				while (h <= cantNumeralesAAgregar){
					aux = aux + '#';
					h++;
				}
			}
		}
		result.push_back (aux);
	}

	return result;
}


// EJERCICIO 14

vector <string> partirEnLineas (string s, int c){
	vector <string> result;
	int i = 0;
	int cont;
	string aux = "";
	string aux2 = "";
	int cont2;
	int j;

	while (i < s.size()){
		cont = 0;
		while (i < s.size() && cont <= c && s[i] != '#'){
			aux = aux + s[i];
			cont++;
			i++;
		}
		if (s[i] == '#'){
			int j = i+1;
			aux2 = "";
			cont2 = 0;
			while (j < s.size() && s[j] != '#'){
				aux2 = aux2 + s[j];
				j++;
				cont2++;
			}
			if ((cont + cont2) < c){
				aux = aux + "#" + aux2;
				i = j;
			}
		}
		result.push_back (aux);
		i++;
		aux = "";
	}

	return result;
}


/*************************************************************
  3RA PARTE: ORDENAMIENTO, BUSQUEDA LINEAL Y BUSQUEDA BINARIA
**************************************************************/

// AUX

void swap (int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

pair <vector <int>, int> insertionSort (vector <int> vec){
	pair <vector <int>, int> result;
	int cont = 0;
	int i = 1;

	while (i < vec.size()){
		while ((vec[i] < vec[i-1]) && i > 0){
			swap(vec[i],vec[i-1]);
			i--;
			cont++;
		}
		i++;
	}

	result = make_pair(vec,cont);
	return result;
}

pair <vector <int>, int> selectionSort (vector <int> vec){
	pair <vector <int>, int> result;
	int i = 0;
	int cont = 0;
	while (i < vec.size()-1){
		int j = i + 1;
		while (j < vec.size() && vec[i] < vec[j]){
			j++;
			cont++;
		}
		if (j != vec.size()){
			swap (vec[i],vec[j]);
			i--;
			cont++;
		}
		i++;
	}

	result = make_pair(vec,cont);
	return result;
}

pair <vector <int>, int> bubbleSort (vector <int> vec){
	pair <vector <int>, int> result;
	int cont = 0;
	int i = 0;
	while (i < vec.size() - 1){
		int j = 0;
		while (j < vec.size() - 1){
			if (vec[j] > vec[j+1]){
				swap (vec[j], vec[j+1]);
				cont++;
			}
			j++;
			cont++;
		}
		i++;
		cont++;
	}

	result = make_pair(vec,cont);
	return result;
}


// EJERCICIO 16

vector <pair <string, int> > ordenar (vector <int> vec){
	vector <pair <string, int> > result;
	result.push_back(make_pair ("insertion", insertionSort(vec).second));
	result.push_back(make_pair ("selection", selectionSort(vec).second));
	result.push_back(make_pair ("bubble", bubbleSort(vec).second));
	return result;
}


// EJERCICIO 17 1

int cantCeros (vector <int> vec){
	int cant = 0;
	for (int i = 0; i < vec.size(); i++){
		if (vec[i] == 0){
			cant++;
		}
	}
	return cant;
}


// AUX

int cantApariciones (vector<int> vec, int e){
	int cant = 0;
	for (int i = 0; i < vec.size(); i++){
		if (vec[i] == e){
			cant++;
		}
	}
	return cant;
}


// EJERCICIO 17 2

int elMasRepetido (vector <int> vec){
	int masRepetido = vec[0];
	for (int i = 0; i < vec.size(); i++){
		if (cantApariciones(vec,vec[i]) > cantApariciones(vec,masRepetido)){
			masRepetido = vec[i];
		}
	}
	return masRepetido;
}


// AUX

int maximo (vector <int> vec){
	int max = vec[0];
	for (int i = 0; i < vec.size(); i++){
		if (vec[i] > max){
			max = vec[i];
		}
	}
	return max;
}

int minimo (vector <int> vec){
	int min = vec[0];
	for (int i = 0; i < vec.size(); i++){
		if (vec[i] < min){
			min = vec[i];
		}
	}
	return min;
}


// EJERCICIO 17 3

int difMaximoYMinimo (vector <int> vec){
	return (maximo(vec) - minimo(vec));
}


// EJERCICIO 17 4

int cantCerosOrdenado (vector <int> vec){
	int cant = 0;
	int i = 0;
	while (vec[i] == 0 && i < vec.size()){
		cant++;
		i++;
	}
	return cant;
}

int elMasRepetidoOrdenado (vector <int> vec){
	int masRepetido;
	int cantApariciones = 0;
	int i = 0;
	int cont;
	while (i < vec.size()-1 || masRepetido == (vec.size() /2)){
		cont = 0;
		while (vec[i] == vec[i+1]){
			i++;
			cont++;
		}
		if (cantApariciones < cont){
			cantApariciones = cont;
			masRepetido = vec[i];
		}
		i++;
	}
	return masRepetido;
}

int difMaximoYMinimoOrdenado (vector <int> vec){
	return (vec[vec.size()-1] - vec[0]);
}


// EJERCICIO 18 1

int sumaCerosYUnos (vector <int> vec){
	int suma = 0;
	for (int i = 0; i < vec.size(); i++){
		if (vec[i] == 1){
			suma++;
		}
	}
	return suma;
}


// EJERCICIO 18 2

int sumaCerosYUnosOrdenado (vector <int> vec){
	int suma = 0;
	int i = 0;
	while (vec[i] == 0 && i < vec.size()){
		i++;
	}
	suma = vec.size() - i;
	return suma;
}


// EJERCICIO 18 3

int suma15y22 (vector <int> vec){
	int suma;
	int i = 0;
	while (vec[i] == 15 && i < vec.size()){
		i++;
	}
	suma = (15 * i) + (22 * (vec.size()-i));
	return suma;
}


// EJERCICIO 19

vector <int> reconstruye (vector <int> vec){
	return vec;
}


// EJERCICIO 20

vector <int> dosMitades (vector <int> vec){

	return vec;
}


// EJERCICIO 21

vector <int> merge (vector <int> vec1, vector <int> vec2){
	vector <int> result;
	int i = 0;
	int j = 0;

	while (i < vec1.size() && j < vec2.size()){
		if (vec1[i] < vec2[j]){
			result.push_back (vec1[i]);
			i++;
		}else{
			result.push_back (vec2[j]);
			j++;
		}
	}
	while (i < vec1.size()){
		result.push_back (vec1[i]);
		i++;
	}
	while (j < vec1.size()){
		result.push_back (vec2[j]);
		j++;
	}
	return result;
}


// EJERCICIO 22

vector <int> kValoresMasCercanosAN (vector <int> vec, int n, int k){
	vector <int> result;
	
	return result;
}


// EJERCICIO 24

int cantElementosAIntercambiar (vector <int> vec){
	int result = 0;
	
	return result;
}
