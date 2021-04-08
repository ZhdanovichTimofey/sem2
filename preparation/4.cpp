#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
	std::cout << std::fixed << std::setprecision(4);
	int n;
	double a = 0, r;
	std::cin >> n;
	for (int i = 0; i < n; ++i){
		std::cin >> r;
		a += r*r;
	}
	std::cout << std::sqrt(a);
}
