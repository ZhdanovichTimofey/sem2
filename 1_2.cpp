#include <iostream>
#include <string>
#include <algorithm>

int main(){
	char c;
	int n = 128, k = 0, l;
	int* p = new int[n];
	for (int i = 0; i < n; ++i){
		p[i] = 0;
	}
	while (std::cin.get(c)){
		p[c] += 1;
		k += 1;  
	}
	std::sort(p, p + n);
	double* p1 = new double[n];
	for (int i = 0; i < n; ++i){
		std::cout << (double)p[n-1-i] / k << ' ';
	}
}
