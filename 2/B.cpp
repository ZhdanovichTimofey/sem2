#include <iostream>

int main(){
	int n;
	std::cin >> n;
	if (((n % 4 == 0) and (n % 100 != 0)) or (n % 400 == 0)){
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
}
