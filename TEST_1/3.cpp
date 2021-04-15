#include <iostream>

void sort(int* first, int* last){
	int n = last - first;
	int k = 0, f = 0;
	for (int i = 0; i < n/2 + 1; ++i){
		for (int j = f; j < n/2; ++j){
			if (first[i] >= first[n - 1 - j]){
				k = first[n - 1 - j];
				first[n - 1 - j] = first[i];
				first[i] = k;
				f = j;
			}
		}
	}
	if (n / 2 > 1){
		sort(first, first + n/2);
		sort(first + n/2, last);
	}
}

int main(){
	int n;
	std::cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; ++i){
		std::cin >> p[i];
	}
	sort(p, p + n);
	if (n % 2 == 0)
		std::cout << (p[n/2 - 2] + p[n/2]) / 2;
	else
		std::cout << p[n/2];
	delete[] p;
}
