#include "Point.hpp"
// https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle
// https://en.wikipedia.org/wiki/Barycentric_coordinate_system

static float	vec_prod(Point const a, Point const b)
{
	float ax = a.get_x().toFloat();
	float ay = a.get_y().toFloat();
	float bx = b.get_x().toFloat();
	float by = b.get_y().toFloat();
	return ((ax * by) - (ay * bx));
}

static Point *new_vector(Point const a, Point const b) // this function returns the coordinates of the vectors between each point of the triangle + point
{
	Point *vec = new Point(b.get_x().toFloat() - a.get_x().toFloat(), b.get_y().toFloat() - a.get_y().toFloat());
	return (vec);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point *ab = new_vector(a, b);
	Point *bc = new_vector(b, c);
	Point *ca = new_vector(c, a);
	Point *a_point = new_vector(a, point);
	Point *b_point = new_vector(b, point);
	Point *c_point = new_vector(c, point);

	float res1 = vec_prod(*ab, *a_point);
	float res2 = vec_prod(*bc, *b_point);
	float res3 = vec_prod(*ca, *c_point);

	delete (ab);
	delete (bc);
	delete (ca);
	delete (a_point);
	delete (b_point);
	delete (c_point);

	//if the three res have the same sign, the point is in the triangle
	bool has_neg = (res1 < 0) || (res2 < 0) || (res3 < 0);
	bool has_pos = (res1 > 0) || (res2 > 0) || (res3 > 0);
	// std::cout << "res1 : " << res1 << " res2 : " << res2 << " res3 : " << res3 << std::endl;
	// std::cout << "has_neg : " << has_neg << std::endl;
	// std::cout << "has_pos : " << has_pos << std::endl;
	if (has_neg && has_pos)
		return (0);
	else
		return (1);
}
