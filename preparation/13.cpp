#include <iostream>

int main(){
	int n, s = 0;
	std::cin >> n;
	int** p = new int*[n];
	int* p0 = new int[n * n];
	for (int i = 0; i < n; ++i){
		p[i] = &p0[n * i];
		for (int j = 0; j < n; ++j)
			std::cin >> p[i][j];
	}
	for (int i = 0; i < n; ++i){
		s += p[i][n - 1 - i];
	}
	std::cout << s;
	delete[] p;
	delete[] p0;
}
