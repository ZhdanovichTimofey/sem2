#include <iostream>
#include <cmath>

int main(){
	int n, k = 0;
	double res = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i){
		std::cin >> k;
		res += k;
	}
	std::cout << std::round((res / n) * 10000000000) / 10000000000; 
}
