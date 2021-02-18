
Cat* get_home_for_a_cats_pride(unsigned int n){
		Cat* r = new Cat[n];
		for (unsigned int i = 0; i < n; i++)
			r[i].name = new char[10];
		return r;
}
void clear_home_of_a_cats_pride(Cat *cats, unsigned int n){
	for (unsigned int i = 0; i < n; i++)
		delete[] cats[i].name;
	delete[] cats;
}
