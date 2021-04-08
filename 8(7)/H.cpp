#include <iostream>

int main(){
	int n, res, count = 0, num = 0;
	std::cin >> n;
	res = 2 * n;
	int* p = new int[n];
	for (int i = 0; i < n; ++i){
		std::cin >> p[i];
	}
	for (int i = 0; i < n; ++i){
		if (p[i] < 0){
			count = 0;
			for (int j = i+1; j < n; ++j){
				count += 1;
				if (p[j] == -p[i]){
					if (count < res)
						res = count;
					j = n;				
				}
			}
		}
	}
	if (res < 2 * n)
		std::cout << res;
	else
		std::cout << 0;
	delete[] p;
}
