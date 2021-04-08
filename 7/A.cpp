#include<iostream>

int main(){
	int n = 0;
	int res = 0; 
	std::cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; ++i)
		std::cin >> p[i];
	for (int i = n-1; i > -1 m; --i)
		std::cout << p[i] << " ";
	delete[] p;
}
