#include <iostream>
#include "ejercicios.h"
#include <vector>

using namespace std;

int main (){

    /*vector <int> vec (4);
    vec[0] = 1;
    vec[1] = 5;
    vec[2] = 5;
    vec[3] = 1;

    vector <int> vec1 (8);
    vec1[0] = 3;
    vec1[1] = 3;
    vec1[2] = 3;
    vec1[3] = 9;
    vec1[4] = 9;
    vec1[5] = 9;
    vec1[6] = 9;
    vec1[7] = 9;


    vector <int> vec2 (4);
    vec2[0] = 3;
    vec2[1] = -5;
    vec2[2] = 1;
    vec2[3] = -2;

    vector <int> vec3 (5);
    vec3[0] = 1;
    vec3[1] = 2;
    vec3[2] = 3;
    vec3[3] = 10;
    vec3[4] = 11;*/


    /*for (int i=0; i < mesetaMasLarga(vec2).size(); i++){
        cout << mesetaMasLarga(vec2)[i] << ",";
    }*/

    /*for (int i=0; i < infrasecuenciaMasLarga(vec2).size(); i++){
            cout << infrasecuenciaMasLarga(vec2)[i] << ",";
     }*/

    /*for (int i = 0; i < productoCartesiano(vec2,vec3).size(); i++){
    	cout << "<" << productoCartesiano(vec2,vec3)[i].first << ",";
    	cout << productoCartesiano(vec2,vec3)[i].second <<">";
    }*/

    //cout << distanciaDeHamming(vec2,vec3);

    //cout << quickSelect (vec3,4);

    //cout << indiceSumasIguales (vec2);

    /*cout << "<<";
    for (int i = 0; i < compresionDeSecuencias(vec3).size()-1; i++){
    	for (int j = 0; j < compresionDeSecuencias(vec3)[i].size()-1; j++){
    		cout << compresionDeSecuencias(vec3)[i][j] << ",";
    	}
    	cout << compresionDeSecuencias(vec3)[i][compresionDeSecuencias(vec3)[i].size()-1];
    	cout << "><";
    }
    for (int j = 0; j < compresionDeSecuencias(vec3)[compresionDeSecuencias(vec3).size()-1].size()-1; j++){
        cout << compresionDeSecuencias(vec3)[compresionDeSecuencias(vec3).size()-1][j] << ",";
     }
     cout << compresionDeSecuencias(vec3)[compresionDeSecuencias(vec3).size()-1][compresionDeSecuencias(vec3)[compresionDeSecuencias(vec3).size()-1].size()-1];
     cout << ">>";*/



    /*string s1 = "dadantepe";
    string s2 = "idrtsujdgno";

	string s3 = "Hola#Mundo#Maravilloso";

	string s = "Esta#es#una#cadena#de#caracteres#a#partir#en#muchas#lineas";

	int c = 10;*/

    //cout << esSubsecuencia (s1,s2);

    //cout << subsecComunMasLarga (s1,s2);

    //cout << substringL (s2,8);

    //cout << ordenInverso(s3);

	/*vector <string> vec4 (3);
	vec4 [0] = "justifying#lines#by########";
	vec4 [1] = "inserting#extra#blanks#is##";
	vec4 [2] = "one#task#of#a#text#editor.#";

	for (int i = 0; i < justificar(vec4).size(); i++){
			cout  << justificar(vec4)[i] << endl;
	}*/

	/*for (int i = 0; i < partirEnLineas(s,c).size(); i++){
		cout  << partirEnLineas(s,c)[i] << endl;
	}*/


	vector <int> vec5 (7);
	vec5 [0] = 14;
	vec5 [1] = 126;
	vec5 [2] = 11;
	vec5 [3] = 4;
	vec5 [4] = 8;
	vec5 [5] = -3;
	vec5 [6] = 0;


	vector <int> v1 (5);
	v1 [0] = 1;
	v1 [1] = 2;
	v1 [2] = 3;
	v1 [3] = 4;
	v1 [4] = 5;

	vector <int> v2 (5);
	v2 [0] = 5;
	v2 [1] = 4;
	v2 [2] = 3;
	v2 [3] = 2;
	v2 [4] = 1;

	vector <int> v3 (5);
	v3 [0] = 1;
	v3 [1] = 3;
	v3 [2] = 5;
	v3 [3] = 2;
	v3 [4] = 4;

	vector <int> v4 (6);
	v4 [0] = 1;
	v4 [1] = 1;
	v4 [2] = 1;
	v4 [3] = 2;
	v4 [4] = 2;
	v4 [5] = 2;

	vector <int> v5 (8);
	v5 [0] = 1;
	v5 [1] = 2;
	v5 [2] = 1;
	v5 [3] = 2;
	v5 [4] = 1;
	v5 [5] = 2;
	v5 [6] = 1;
	v5 [7] = 2;

	vector <int> v6 (7);
	v6 [0] = 1;
	v6 [1] = 10;
	v6 [2] = 50;
	v6 [3] = 30;
	v6 [4] = 25;
	v6 [5] = 4;
	v6 [6] = 6;

	/*for (int i = 0; i < insertionSort(v5).first.size(); i++){
		cout << insertionSort(v5).first[i] << ",";
	}
	cout << endl << insertionSort(v5).second << " pasos" << endl;*/

	/*for (int i = 0; i < selectionSort(v5).first.size(); i++){
		cout << selectionSort(v5).first[i] << ",";
	}
	cout << endl << selectionSort(v5).second << " pasos" << endl;*/

	/*for (int i = 0; i < bubbleSort(v5).first.size(); i++){
			cout << bubbleSort(v5).first[i] << ",";
		}
	cout << endl << bubbleSort(v5).second << " pasos";*/


	/*for (int i = 0; i < ordenar(v6).size(); i++){
		for (int j = 0; j < ordenar(v6)[i].first.size(); j++){
			cout << ordenar(v6)[i].first[j];
		}
		cout << ": " << ordenar(v6)[i].second << " pasos" << endl;
	}*/

	/*vector <int> vec7 (12);
	vec7 [0] = 3;
	vec7 [1] = 1;
	vec7 [2] = -2;
	vec7 [3] = 0;
	vec7 [4] = 2;
	vec7 [5] = -2;
	vec7 [6] = -2;
	vec7 [7] = -2;
	vec7 [8] = 3;
	vec7 [9] = 10;
	vec7 [10] = 0;
	vec7 [11] = 4;

	cout << cantCeros (vec7) << endl;

	cout << elMasRepetido (vec7) << endl;

	cout << difMaximoYMinimo (vec7) << endl;

	vector <int> vec8 (10);
	vec8 [0] = 2;
	vec8 [1] = 2;
	vec8 [2] = 2;
	vec8 [3] = 2;
	vec8 [4] = 2;
	vec8 [5] = 23;
	vec8 [6] = 23;
	vec8 [7] = 64;
	vec8 [8] = 64;
	vec8 [9] = 64;

	cout << cantCerosOrdenado (vec8) << endl;

	cout << elMasRepetidoOrdenado (vec8) << endl;

	cout << difMaximoYMinimoOrdenado (vec8) << endl;*/

	/*vector <int> vec9 (6);
	vec9 [0] = 0;
	vec9 [1] = 1;
	vec9 [2] = 0;
	vec9 [3] = 0;
	vec9 [4] = 1;
	vec9 [5] = 1;

	cout << sumaCerosYUnos (vec9);*/

	/*vector <int> vec10 (6);
	vec10 [0] = 0;
	vec10 [1] = 0;
	vec10 [2] = 1;
	vec10 [3] = 1;
	vec10 [4] = 1;
	vec10 [5] = 1;

	cout << sumaCerosYUnosOrdenado (vec10);*/

	/*vector <int> vec11 (6);
	vec11 [0] = 15;
	vec11 [1] = 15;
	vec11 [2] = 15;
	vec11 [3] = 15;
	vec11 [4] = 22;
	vec11 [5] = 22;

	cout << suma15y22 (vec11);*/

	vector <int> vec12 (5);
	vec12 [0] = -6;
	vec12 [1] = -1;
	vec12 [2] = 2;
	vec12 [3] = 9;
	vec12 [4] = 28;

	vector <int> vec13 (7);
	vec13 [0] = -3;
	vec13 [1] = 0;
	vec13 [2] = 1;
	vec13 [3] = 9;
	vec13 [4] = 11;
	vec13 [5] = 15;
	vec13 [6] = 22;

	for (int i = 0; i < merge(vec12, vec13).size(); i++){
		cout << merge(vec12, vec13)[i] << ",";
	}

    return 0;
}
