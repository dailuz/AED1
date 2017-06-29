#include <vector>
using namespace std;


// 1ER PARTE: SECUENCIAS DE ENTEROS

vector <int> mesetaMasLarga (vector <int> vec);
vector <vector <int> > secuenciaDeSecuencia (int n);
vector <int> infrasecuenciaMasLarga (vector <int> vec);
vector <pair <int, int> > productoCartesiano (vector <int> vec, vector <int> vec2);
bool pertenece (vector <int> vec, int e);
int distanciaDeHamming (vector <int> vec1, vector <int> vec2);
int quickSelect (vector<int> vec, int k);
int sumar (vector <int> vec, int desde, int hasta);
int indiceSumasIguales (vector <int>);
vector < vector <int> > compresionDeSecuencias (vector <int> vec);


// 2DA PARTE: STRINGS

bool esSubsecuencia (string s1, string s2);
string subsecComunMasLarga (string s1, string s2);
string substringL (string s, int l);
string ordenInverso (string s);
vector <string> justificar (vector <string> vec);
vector <string> partirEnLineas (string s, int c);


// 3RA PARTE: ORDENAMIENTO, BUSQUEDA LINEAL Y BUSQUEDA BINARIA

void swap (int &a, int &b);
pair <vector <int>, int> insertionSort (vector <int> vec);
pair <vector <int>, int> selectionSort (vector <int> vec);
pair <vector <int>, int> bubbleSort (vector <int> vec);
vector <pair <string, int> > ordenar (vector <int> vec);
int cantCeros (vector <int> vec);
int cantApariciones (vector<int> vec, int e);
int elMasRepetido (vector <int> vec);
int maximo (vector <int> vec);
int minimo (vector <int> vec);
int difMaximoYMinimo (vector <int> vec);
int cantCerosOrdenado (vector <int> vec);
int elMasRepetidoOrdenado (vector <int> vec);
int difMaximoYMinimoOrdenado (vector <int> vec);
int sumaCerosYUnos (vector <int> vec);
int sumaCerosYUnosOrdenado (vector <int> vec);
int suma15y22 (vector <int> vec);
vector <int> reconstruye (vector <int> vec);
vector <int> dosMitades (vector <int> vec);
vector <int> merge (vector <int> vec1, vector <int> vec2);
vector <int> kValoresMasCercanosAN (vector <int> vec, int n, int k);
int cantElementosAIntercambiar (vector <int> vec);
