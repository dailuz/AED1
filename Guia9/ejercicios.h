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

vector <string> partirEnLineas (string s, int c);
