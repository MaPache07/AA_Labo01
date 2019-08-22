#include <iostream>
#include <string>
using namespace std;

int mostrar(int matriz[3][3], int i, int j){
	if(j == 2){
		if(i == 2){
			cout << matriz[i][j];
			return 0;
		}
		else {
			cout << matriz[i][j];
			cout << "\n";
		}
		j = 0;
		i++;
		return mostrar(matriz, i, j);
	}
	else {
		cout << matriz[i][j];
		cout << " ";
		j++;
		return mostrar(matriz, i, j);
	}
}

int sumatoria(int matrizA[3][3], int matrizB[3][3], int matrizR[3][3], int i, int j){
	if(i == 2){
		matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
		if(j == 2){
			return mostrar(matrizR, 0, 0);
		}
		else {
			i = 0;
			j++;	
		}
		return sumatoria(matrizA, matrizB, matrizR, i, j);
	}
	else {
		matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
		i++;
		return sumatoria(matrizA, matrizB, matrizR, i, j);
	}
}

int main(int argc, char** argv) {
	int matrizA[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrizB[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrizR[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	sumatoria(matrizA, matrizB, matrizR, 0, 0);
	return 0;
}
