#include<iostream>

void sort(int n, int* p){
	int res = 0;
	for (int i = 0; i < n - 1; ++i){
		if (p[i] < 0){
			int j = i;
			while ((j > -1) and (p[j + 1] < p[j])){
				res = p[j + 1];
				p[j + 1] = p[j];
				p[j] = res;
				--j;
			}
		}
	}
	for (int i = 0; i < n; ++i){
		std::cout << p[i] << " ";
	}
}

int main(){
	int n = 0;
	std::cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; ++i)
		std::cin >> p[i];
	sort(n, p);
	delete[] p;
}
