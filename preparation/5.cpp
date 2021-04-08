#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
	std::cout << std::fixed << std::setprecision(4);
	double h, v;
	std::cin >> h >> v;
	std::cout << std::sqrt(2 * h / 9.81) * v;
}
