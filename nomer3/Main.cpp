#include "Circle.h"
#include "Vector.h"

using namespace std;

int main()
{
	Vector3 v1, v2(1, 5, -2);
	v1.SetXYZ(6, 2, 5);
	Vector3 v3 = v1 * v2 - v2;
	cout << "v1 = " << v1 << "\nb = " << v2 << "\nc = " << v3 << "\nabs(v3) = " << v3.Abs();

	Circle c(6);
	cout << "\n\nDiameter = " << c.Diameter() << "\nlenght = " << c.CircleLength() << "\nArea = " << c.Area();
}