#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
	std::cout << std::fixed << std::setprecision(4);
	double** p = new double*[4];
	double* p1 = new double[12];
	for (int i = 0; i < 4; ++i){
		p[i] = &p1[3 * i];
		for (int j = 0; j < 3; ++j){
			std::cin >> p[i][j];		
		}
	}
	double x1 = p[0][0] - p[1][0], x2 = p[0][0] - p[2][0], x3 = p[0][0] - p[3][0];
	double y1 = p[0][1] - p[1][1], y2 = p[0][1] - p[2][1], y3 = p[0][1] - p[3][1];
	double z1 = p[0][2] - p[1][2], z2 = p[0][2] - p[2][2], z3 = p[0][2] - p[3][2];
	double a = (x1 * y2 * z3 + x3 * y1 * z2 + z1 * x2 * y3 - z1 * y2 * x3 - x2 * y1 * z3 - x1 * y3 * z2);
	if (a < 0)
		a = -a;
	std::cout << a/6; 
	delete[] p;
	delete[] p1;
}
