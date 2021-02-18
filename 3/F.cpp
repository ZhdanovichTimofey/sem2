
int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new){
	if (n_new == 0){
			delete[] source;
			return NULL;
	}
	int* r = new int[n_new];
	if (source == NULL){
		return r;
	}
	if (n_new < n_old){
	for (unsigned int i = 0; i < n_new; i++)
		r[i] = source[i];
	delete[] source;
	return r;
	}
	for (unsigned int i = 0; i < n_old; i++){
		r[i] = source[i];
	}
	delete[] source;
	return r;
}

