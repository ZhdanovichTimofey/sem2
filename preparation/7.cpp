#include <iostream>

int main(){
	int m, n;
	std::cin >> n >> m;
	for (int i = 0; i < m; ++i){
		std::cout << '|';
	}
	for (int i = 0; i < n; ++i){
		std::cout << '=';
	}
	for (int i = 0; i < m; ++i){
		std::cout << '|';
	}
}
