#include <iostream>

int main(){
	int n;
	std::cin >> n;
	while ((n % 2 == 0) and (n != 0)){
		n /= 2;
	}
	if (n == 1)
		std::cout << "YES";
	else
		std::cout << "NO";
}
