#include <iostream>
#include <string>
using namespace std;

int menor(int array[], int aux, int i, int size){
	if(i == size){
		aux = array[i];
	}
	else if(array[i] < aux){
		aux = array[i];
	}
	if(i == 0){
		return aux;
	}
	else{
		i--;
		return menor(array, aux, i, size);
	}
}

int main(int argc, char** argv) {
	int array[] = {2,4,6,3,7,5};
	int size = sizeof(array)/sizeof(*array)-1;
	cout << menor(array, 0, size, size);
	return 0;
}
