#include <iostream>
#include <cmath>

double M(int* p, int n){
	double res = 0; 
	for (int j = 0; j < n; ++j)
		res += p[j];
	res /= n;
	res = round(1000*res)/1000;
	return res;
}

double D(int* p, int n){
	double res, m_2;
	m_2 = M(p, n) * M(p, n);
	for (int j = 0; j < n; ++j)
		p[j] *= p[j];
	res = M(p, n) - m_2;
	res = round(1000*res)/1000;
	return res; 
}

int main(){
	int* p = new int[10000];
	int i = 0, in = 1;
	p[0] = 1;
	while (in != 0){
		std::cin >> p[i];
		in = p[i];
		++i;
	}
	std::cout << static_cast<double>(M(p, i-1)) << " ";
	std::cout << static_cast<double>(D(p, i-1));
	delete[] p;
}
