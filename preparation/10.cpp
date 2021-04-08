#include <iostream>

int main(){
	int n, g, m = 0, d = 0, f = 0, d0 = 0;
	std::cin >> n;
	int* k = new int[n];
	for (int i = 0; i < n; ++i){
			std::cin >> k[i];
			d += k[i];	
	}
	std::cin >> g;
	int* m1 = new int[g];
	for (int i = 0; i < g; ++i)
		m1[i] = 0;
	int i = 0; 
	while ((m < g) and (d > 0)){
		for (int a = 0; a < k[i]; ++a){
			d -= 1;
			f += (2 + i);
			if (m1[f % g] == 0)
				m += 1;
			if ((m == g) and (d0 < d))
				d0 = d;
			m1[f % g] += 1;
		}
		i += 1;	
		}
	if (m == g)
		std::cout << "YES " << d0;
	if ((d == 0) and (m < g))
		std::cout << "NO " << g - m;
	delete[] k;
	delete[] m1;
}


