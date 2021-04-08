#include <iostream>

int main(){
	int n;
	int res = 0;
	std::cin >> n;
	int* num = new int[n];
	for (int i = 0; i < n; ++i){
		std::cin >> num[i];
		if ((num[i] % 4 == 0) and ((num[i] / 1000 == 5) or (num[i] / 1000 == 4)))
			num[i] = 0;
		else
			if ((num[i] % 7 == 0) and ((num[i] / 1000 == 7) or (num[i] / 1000 == 1)))
				num[i] = 0;
			else
			if ((num[i] % 9 == 0) and ((num[i] / 1000 == 9) or (num[i] / 1000 == 8)))
					num[i] = 0;
				else
					if ((num[i] % 9 != 0) and (num[i] % 7 != 0) and (num[i] % 4 != 0))	
						num[i] = 0;
	}
	for (int i = 0; i < n; ++i){
		if (num[i] != 0)
			std::cout << num[i] << "\n";
		res = 1;
	}
	if (res == 0)
		std::cout << "0";
	delete[] num;
}
