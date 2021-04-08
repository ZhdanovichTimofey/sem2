#include <iostream>

int main(){
	int a, b, c, d, ans;
	std::cin >> a >> b >> c >> d >> ans;
	if ((b - a == ans) and (d / c == ans))
		std::cout << "5";
	else
		if ((b - a == ans) or (d / c == ans))
			std::cout << "4";
		else
			if (ans == 1024)
			std::cout << "3";
		else
			std::cout << "2";
}
