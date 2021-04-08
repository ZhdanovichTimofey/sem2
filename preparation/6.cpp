#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int** p1 = new int*[n];
	int** p2 = new int*[n];
	int** p3 = new int*[n];
	int* a1 = new int[n*n];
	int* a2 = new int[n*n];
	int* a3 = new int[n*n];
	for (int i = 0; i < n; ++i){
		p1[i] = &a1[n*i];
		for (int j = 0; j < n; ++j){
			std::cin >> p1[i][j];
		}
	}
	for (int i = 0; i < n; ++i){
		p2[i] = &a2[n*i];
		p3[i] = &a3[n*i];
		for (int j = 0; j < n; ++j){
			std::cin >> p2[i][j];
			p3[i][j] = 0;
		}
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			for (int k = 0; k < n; ++k){
				p3[i][j] += p1[i][k] * p2[k][j];	
			}
		}
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			std::cout << p3[i][j] << " ";
		}
		std::cout << "\n";
	}
	delete[] p1;
	delete[] p2;
	delete[] p3;			
	delete[] a1;
	delete[] a2;
	delete[] a3;
}
