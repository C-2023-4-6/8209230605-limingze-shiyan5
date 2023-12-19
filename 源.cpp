#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point() :x(60), y(80) {}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
    void display(){
		std::cout << "×ø±ê£º(" << x << "," <<
			y << ")" << std::endl;
}
 };

int main()
{
	Point p;
	p.display();
	p.setPoint(5, 7);
	p.display();

	return 0;
}