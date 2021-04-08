#include <iostream>

int main(){
	int n, m, k = 0;
	std::cin >> n;
	int* p0 = new int[2 * n];
	int** p = new int*[n];
	for (int i = 0; i < n; ++i){
		p[i] = &p0[2 * i];
		std::cin >> p[i][0] >> p[i][1];
	}
	std::cin >> m;
	for (int i = 0; i < n / 2; ++i){
		k += p[i][1];
		p[i][1] = 0;
	}
	for (int i = n / 2; i < n; ++i){
		if (m - (p[i][0] + p[i][1]) < 0){
			k += p[i][0] + p[i][1] - m;
			p[i][1] -= p[i][0] + p[i][1] - m;
		}
		if (k < (m - (p[i][0] + p[i][1]))){
			p[i][1] += k;
			k = 0;	
		} else
		if (k >= (m - (p[i][0] + p[i][1]))){
			if (i < n - 1){
				k -= m - (p[i][0] + p[i][1]);
				p[i][1] += m - (p[i][0] + p[i][1]);	
			} else
				p[i][1] += k;	
		}
	}
	for (int i = 0; i < n; ++i){
		std::cout << p[i][0] << " " << p[i][1] << "\n";
	}
	delete[] p0;
	delete[] p;	
}
