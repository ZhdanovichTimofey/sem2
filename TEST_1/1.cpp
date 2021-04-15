#include <iostream>

int main(){
	int n, res = 1;
	std::cin >> n;
	for (int i = 1; i <= n; ++i){
		res *= i;
	}
	std::cout << res;
}
