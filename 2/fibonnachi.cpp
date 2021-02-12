#include <iostream>

long fibs[1000] = {0};

fib_cycle(int n){
	int n1 = 1;
	int n2 = 1;
	int r = 1;
	if (n >= 3)
		for (int i = 3; i < n + 1; ++i){
			r += n2;
			n2 = n1;
			n1 = r;
	}
	return r;	
}

fib_optimalrec(int n){
	if (fibs[n] > 0) 
		return fibs[n];
	fibs[n] = fib_optimalrec(n - 1) + fib_optimalrec(n - 2);
	return fibs[n];
}

int main(){
	int n;
	fibs[1] = 1;
	fibs[2] = 1;
	std::cin >> n;
	std::cout << fib_optimalrec(n) << std::endl;
	std::cout << fib_cycle(n);
	return 0;
}
