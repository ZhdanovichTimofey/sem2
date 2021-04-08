#include <iostream>

int main(){
	int n = 1, result = 0;
	while (n != 0) {
		std::cin >> n;
		if ((n % 2 == 0) and (n > result)){
			result = n;
		}
	}
	std::cout << result;
}
