#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void array_out(int* a){
	for (; *a != -1; ++a)
		std::cout << *a << " ";
	}
	
int size_array(int* a){
	int* p = a;
	for (; *p + 1; ++p);
	return p - a;
}

int* generation(int n){
	srand(time(NULL));
	int* r = new int[n + 1];
	for (int i = 0; i < n; ++i)
		r[i] = rand() % 1000;
	r[n] = -1;
	return r;
}
 
int max_array(int* a){
	int r = *a;
	for (int* k = a; *k != -1; ++k){
		if (r < *k)
			r = *k;
	}
	return r;
	}
	
bool is_in_array(int* a, int n, int x){
	for (int* p = a; p != a + n; ++p)
		if (*p == x)
			return true;
	return false; 
}

bool bin_search_cycle(int* a, int n, int x){
	int l = 0;
	int r = n - 1;
	int* p = a + (n / 2);
	while (l <= r){
		int m = (r + l) / 2;
		if (a[m] == x)
			return true;
		if (a[m] < x)
			l = m + 1;
		if (a[m] > x)
			r = m - 1;
	}
	return false;
}

bool bin_search_rec(int* start, int* end, int x){
	if (start >= end)
		return false;
	int* p = start + (end - start) / 2;
	if (*p == x)
		return true;
	if (*p < x)
		bin_search_rec(p + 1, end, x);
	else
		bin_search_rec(start, p, x);
}

int main(){
	int* a = generation(10);
	int n = size_array(a);
	std::sort(a, a + n);
	array_out(a);
	std::cout << "\n" << bin_search_rec(a, a + n, 111);
	delete[] a;
}
