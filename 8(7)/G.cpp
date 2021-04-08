#include <iostream>

double function(double x){
	return x*x - 2;
}


double find_root(double (*f)(double), double a, double b, double tol){
	double right = b, left = a;
	if (f(right) > f(left)){
		while (right-left > 2 * tol){
			if (f(right - (right-left)/2) > 0){
				right = right - (right-left)/2;				
			}
			else{
				left = right - (right-left)/2;				
			} 	
		}
	} else {
		while (b-a > 2 * tol){
			if (f(b/2) < 0)
				b /= 2;
			else 
				a = b/2;
		}

	}
	return left + (right - left)/2;
}

int main(){
	double a = 0.0, b = 2.0, tol = 0.01;
	std::cin >> a >> b >> tol;
	double (*f)(double) = function;
	std::cout << find_root(f, a, b, tol);
}
