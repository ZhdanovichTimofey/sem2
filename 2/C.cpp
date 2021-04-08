#include <iostream>

int main(){
	int r = 0, n = 1;
	while (n != 0){
		std::cin >> n;
		if (n % 2 == 0)
			r += 1;
	}
	std::cout << (r - 1);
}
