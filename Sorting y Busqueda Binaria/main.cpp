#include <iostream>
#include "funciones.h"
#include <vector>
using namespace std;

int main (){
	vector <int> vec (9);
	vec[0] = 3;
	vec[1] = 0;
	vec[2] = 1;
	vec[3] = 8;
	vec[4] = 7;
	vec[5] = 2;
	vec[6] = 5;
	vec[7] = 4;
	vec[8] = 9;
	vec[9] = 6;


	for (int i=0;i < insertionSort(vec).size();i++){
		cout << insertionSort(vec)[i] << ",";
	}

	/*for (int i=0;i < selectionSort(vec).size();i++){
			cout << selectionSort(vec)[i] << ",";
	}*/

	/*for (int i=0;i < bubbleSort(vec).size();i++){
				cout << bubbleSort(vec)[i] << ",";
	}*/

	/*for (int i=0;i < countingSort(vec).size();i++){
					cout << countingSort(vec)[i] << ",";
	}*/

	/*cout << binarySearch (vec,-5) << endl;
	cout << binarySearch (vec,4) << endl;
	cout << binarySearch (vec,2) << endl;
	cout << binarySearch (vec,5) << endl;
	cout << binarySearch (vec,1) << endl;
	cout << binarySearch (vec,19) << endl;
	cout << binarySearch (vec,15) << endl;
	cout << binarySearch (vec,11) << endl;
	cout << binarySearch (vec,0) << endl;
	cout << binarySearch (vec,111) << endl;
	cout << binarySearch (vec,-2) << endl;
	cout << binarySearch (vec,3) << endl;
*/
	return 0;
}


