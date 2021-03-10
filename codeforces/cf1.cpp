#include <iostream>
#include <cmath>

long long* dataread(){
	int n = 0;
	std::cin >> n;
	long long* p = new long long[n+1];
	for (int i = 0; i < n; ++i)
		std::cin >> p[i];
	p[n] = -1;
	return p;
}

int max(int a, int b){
	if (a > b)
		return a;
	return b;
}

int min(int a, int b){
	if (a < b)
		return a;
	return b;
}

long long result(long long* p){
	long long res = 0;
	int a = 0;
	int b = 0;
	for (int i = 0; p[i+1] != -1; ++i){
		a = max(p[i], p[i+1]);
		b = min(p[i], p[i+1]);
		while ((a / b > 2) or ((a / b == 2) and (a % b != 0))){
			res += 1;
			b *= 2;	
		}
	}
	return res;
}

int main(){
	int t = 0;
	std::cin >> t;
	long long** p;
	long long* r;
	r = new long long[t];
	p = new long long*[t];
	for (int i = 0; i < t; ++i){
		p[i] = dataread();
	}
	for (int i = 0; i < t; ++i){
		std::cout << result(p[i]) << "\n";
	}	
}
