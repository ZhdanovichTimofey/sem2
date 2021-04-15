#include <iostream>
#include <algorithm>

int main(){
	int n, fn, min, res_i = 0, res_j = 1;
	std::cin >> n;
	int* p1 = new int[n];
	for (int i = 0; i < n; ++i){
		std::cin >> p1[i];
	}
	min = abs(p1[0] - p1[1]);
	for (int i = 0; i < n; ++i){
		for (int j = i+1; j < n; ++j){
			if (min > abs(p1[i] - p1[j])){
				res_i = i;
				res_j = j;
			}
		}
	}
	std::cout << res_i+1 << ' ' << res_j+1; 
}
