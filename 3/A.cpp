#include <iostream>

int main(){
	int n, sum_m = 0, sum = 0;
	double mean;
	std::cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
		sum_m += a[i];
	}
	mean = sum_m / n;
	for (int i = 0; i < n; i++){
		if (a[i] > mean){
			sum += a[i];
		}
	}
	delete[] a;
	std::cout << sum;
	return 0;
}
