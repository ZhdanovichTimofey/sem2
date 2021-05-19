#include <iostream>
#include <ctime>

int* generate(int n){
	srand(time(0));
	int* p = new int[n];
	for (int i = 0; i < n; ++i){
		p[i] = rand();
	}
	return p;
}

int* search(int* a, int size, int x){
	int i = 0;
	int* res = a;
	while ((i < size) and (*res != x)){
		if (a[i] == x) 
			res = a + i;
		++i;
	}
	if (*res != x)
		return NULL;
	return res;
}

int count(int* a, int size, int x){
	int res = 0;
	int* end = a + size;
	while ((size > 1) and (search(a, size, x) != NULL)){
		res += 1;
		a = search(a, size, x) + 1; 	
		size = end - a + 1;
	}
	return res;	
}

int* bin_search(int* start, int* end, int x){
	int* m = start + (end - start)/2;
	while (end - start > 1){
		m = start + (end - start)/2;
		if (*m > x){
			end = m;
		} else {
			start = m;
		}
	}
	return start;
}

void selection_sort_cycle(int* start, int* end){
	int min = *start;
	int* i = start;
	for (int* p1 = start; p1 != end; ++p1){
		min = *p1;
		i = p1;
		for (int* p2 = p1; p2 != end; ++p2){
			if (*p2 < min){
				min = *p2;
				i = p2;	
			} 
		}
		*i = *p1;
		*p1 = min; 	
	}
}

void selection_sort_recursion(int* start, int* end){
	int min = *start;
	int* i = start;
	for (int* p = start; p != end; ++p){
		if (*p < min){
			i = p;
			min = *p;
		}
	}
	*i = *start;
	*start = min;
	if (end - start > 2)
		selection_sort_recursion(start+1, end); 
}

void merge(int* s, const int* m, const int* e){
	int len = e - s;
	int* final = new int[len];
	int i = 0, j = 0;
	for (int k = 0; k < len; ++k){
		if ((s[i] < m[j]) and (i < m - s)){
			final[k] = s[i];
			++i;
		} else {
			final[k] = m[j];
			++j;
		}
	}
	for (int k = 0; k < len; ++k){
		s[k] = final[k];
	}
}

void merge_sort(int* start,int* end){
	int len = end - start;
	if (len > 1){
		merge_sort(start, start + len/2);
		merge_sort(start + len/2, end);
		merge(start, start + len/2, end);
	} else {
		selection_sort_cycle(start, end);
	}
}

int main(){
	int n = 10;
	int p[5] = {2, 3, 4, 1, 5};
	merge_sort(p, p + 5);
	for (int i = 0; i < 5; ++i){
		std::cout << p[i] << "\n";	
	}
}
