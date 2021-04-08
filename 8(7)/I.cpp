#include <iostream>
#include <algorithm>

int main(){
	int n = 10000, n1 = 0, n2 = 0;
	int* p0 = new int[n];
	int* p1 = new int[n];
	int* p2 = new int[n];
	int i = 0;
	while (std::cin >> p0[i]){
		if (p0[i] % 2 == 0){
			p2[n2] = p0[i];
			n2 += 1;
		} else {
			p1[n1] = p0[i];
			n1 += 1;
		}
		i += 1;
	}
	std::sort(p1, p1 + n1);
	std::sort(p2, p2 + n2);
	for (int i = 0; i < n2; ++i)
		std::cout << p2[i]	<< " ";
	for (int i = 0; i < n1; ++i)
		std::cout << p1[i]	<< " ";	
	delete[] p0;
	delete[] p1;
	delete[] p2;
}
