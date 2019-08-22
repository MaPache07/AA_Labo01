#include <iostream>
#include <string>
using namespace std;

int potencia(int n, int x, int aux){
	if(x == 1){
		return n;
	}
	else{
		x--;
		n = n*aux;
		return potencia(n, x, aux);
	}
}

int main(int argc, char** argv) {
	cout << potencia(6, 3, 6);
	return 0;
}
