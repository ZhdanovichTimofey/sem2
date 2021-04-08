#include <iostream>
#include <cmath>
int main(){
	double a, v, s;
	std::cin >> a >> v >> s;
	if (std::sqrt(2 * s / a) > s / v)
		std::cout << '2';
	else
		std::cout << 1; 
}
