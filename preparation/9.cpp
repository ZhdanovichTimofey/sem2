#include <iostream>

int main(){
	int n, j = 0, m = 0;
	double r, h, p;
	std::cin >> n;
	for (int i = 0; i < n; ++i){
		std::cin >> r >> h >> p;
		if (m < p * r * r * h){
			j = i;
			m = p * r * r * h;
		}
	}
	std::cout << j;
}
