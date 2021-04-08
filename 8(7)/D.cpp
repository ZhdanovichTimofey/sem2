#include <iostream>
#include <string>

int main(){
	int i, n, m;
	int f = 0;
	std::cin >> n >> i;
	std::string* p1 = new std::string[n];
	int* p2 = new int[n];
	int* p3 = new int[n];
	for (int j = 0; j < n; ++j){
		std::cin >> p1[j] >> p2[j];
		p3[j] = 1;
	}
	std::cin >> m;
	int k = 0;
	for (int j = 0; j < m; ++j){
		k %= n;
		while (p3[k] == 0){
			k += 1;
			k %= n;
		}
		if (p2[k] == 1){
			if (i == 0){
				p3[k] = 0;
			}
			k += 1;
		}else
		if (p2[k] == 0){
			if (i == 0){
				i = 1;
				k += 1;
				for (int r = 0; r < n; ++r)
					f += p3[r];
				if (f > 1)
					p2[k-1] = 1;
			} else
			if (i == 1){
				i = 0;
				k += 1;
			}
		}
	}
	for (int j = 0; j < n; ++j){
		if (p3[j] == 1)
			std::cout << p1[j] << " " << p2[j] << "\n";
	}
	delete[] p1;
	delete[] p2;
	delete[] p3;
}
