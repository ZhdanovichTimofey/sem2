#include<iostream>

struct point{
	int x, y;
};

class vestor2D{
public:
	vector2D(int x = 0, int y= 0): x(x), y(y) {}  //конструктор
	int x, y;
	vector2D add(vector2D v){
		return vector2D(x + v.x, y + v.y);
	}
	vector2D operator+(const vector2D& v1){
		return vector2D(x + v1.x, y + v1.y);
	}
	vector2D operator*(int a) const{
		return vector2D(x * a, y *a);
	}
};

vector2D operator*(int a, const vector2D& v){
		return v * a;

std::ostream& operator<<(std::ostream& out, const vector2D& v) { //перегрузка вывода для вектора
	out << "(" << v.x ", " << v.y << ")";
	return out;
}

int main(){
	vector2D v(42, 21);
return 0;
}
