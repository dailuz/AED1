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

	vector <string> vec4 (3);
	vec4 [0] = "justifying#lines#by########";
	vec4 [1] = "inserting#extra#blanks#is##";
	vec4 [2] = "one#task#of#a#text#editor.#";

	for (int i = 0; i < justificar(vec4).size(); i++){
			cout  << justificar(vec4)[i] << endl;
	}

	/*for (int i = 0; i < partirEnLineas(s,c).size(); i++){
		cout  << partirEnLineas(s,c)[i] << endl;
	}*/


    return 0;
}
