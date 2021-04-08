#include <iostream>

int main(){
	int n, m;
	std::cin >> n >> m;
	int** p = new int*[n];
	int* p1 = new int[n*m];
	for (int i = 0; i < n*m; ++i)
		p1[i] = 0;
	for (int i = 0; i < n; ++i){
		p[i] = &p1[m*i];
		}
	for (int j = 0; j < m; ++j){
		p[0][j] = 1;
		p[n-1][j] = 1;
	}
	for (int j = 0; j < n; ++j){
		p[j][0] = 1;
		p[j][m-1] = 1;
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			if (p[i][j] == 1)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
	delete[] p;
	delete[] p1;
}
