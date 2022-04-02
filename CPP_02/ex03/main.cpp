#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(0.0f,0.0f);
	Point b(3.0f,0.0f);
	Point c(1.5f,1.5f);
	Point p1(1.1f, 0.6f);
	Point p2(56.5f, 45.7f);
	Point p3(1,1);

	bool test = bsp(a, b, c, p1);
	if (test)
		std::cout << test << " p1 is in the triangle" << std::endl;
	else	
		std::cout << test << " p1 is not in the triangle" << std::endl;

	test = bsp(a,b,c,p2);
	if (test)
		std::cout << test << " p2 is in the triangle" << std::endl;
	else	
		std::cout << test << " p2 is not in the triangle" << std::endl;

	test = bsp(a,b,c,p3);
	if (test)
		std::cout << test << " p3 is in the triangle" << std::endl;
	else	
		std::cout << test << " p3 is not in the triangle" << std::endl;

	return (0);
}
