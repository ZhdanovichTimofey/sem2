#include <iostream>

int main(){
	int n;
	int m;
	int r = 1;
	std::cin >> n >> m;
	if (n < m){
		r = n;
		n = m;
		m = r;
	}
	while (r > 0){
		r = n % m;
		n = m;
		m = r; 
	}
	std::cout << n;
	return 0;
}
