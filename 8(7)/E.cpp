#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int** p = new int*[n];
	int* p1 = new int[n*n];
	for (int i = 0; i < n; ++i){
		p[i] = &p1[n*i];
		for (int j = 0; j < n; ++j){
			std::cin >> p[i][j];
		}
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			std::cout << p[n - j - 1][i] << " ";
		}
		std::cout << "\n";
	}
	delete[] p;
	delete[] p1;
}
