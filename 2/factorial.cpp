#include <iostream>

long fact_cycle(int n){
	long r = 1;
	for (int i = 1; i < n + 1; ++i)
			r *= i;
	return r;
}

long fact_recursion(int n){
	long r;
	if (n <= 1)
		return 1;		
	r = n * fact_recursion(n-1);
	return r;
	}

int main() {
	int n;
	std::cin >> n;
	std::cout << fact_recursion(n) << std::endl;
	std::cout << fact_cycle(n);
	return 0;
}
