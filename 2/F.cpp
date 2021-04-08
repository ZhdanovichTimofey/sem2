#include <iostream>

int main(){
	int max = 0, n = 1, result = 0, a[10000] = {0}, i = 0;
	while (n != 0) {
		std::cin >> n;
		a[i] = n;
		i++;
		if (n > max)
			max = n;
		}
	for (i = 0; i < 10000; i++)
		if (a[i] == max)
			result += 1;
	std::cout << result;
}
