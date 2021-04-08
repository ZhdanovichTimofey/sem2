#include<iostream>

void smoothing(int n, int* p){
	int res = 0;
	for (int i = 0; i < n; ++i){
		res = (p[i] + p[(n + i - 1) % n] + p[(n + i + 1) % n]) / 3;
		std::cout << res << " ";
	}
}

int main(){
	int n = 0;
	std::cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; ++i)
		std::cin >> p[i];
	smoothing(n, p);
	delete[] p;
}
