#include "Vector.h";
using namespace std;
#include <iostream>;

double Vector::Set_x()
{
	cout << "������� �������� ���������� �" << endl;
	cin >> x;
	return x;
}

double Vector::Set_y()
{
	cout << "������� �������� ���������� Y" << endl;
	cin >> y;
	return y;
}

void Vector::Print_Vector()
{
	cout << "������ c ������������ ";
	cout << "(" << this->x << "," << this->y << ")" << endl;
}
Vector Vector::Get_Mult(double k)
{
	cout << "������������ ������� ("<<x<<","<<y<<") �� ����� "<<k<<" = ";
	return Vector({x * k, y * k });
}

double Vector::Get_Sclr(Vector n1)
{
	cout << "��������� ������������ �������� (" << x << "," << y << ") � (" << n1.x << "," << n1.y << ") = ";
	return double(this->x*n1.x+this->y*n1.y);
}

Vector Vector::Get_Sum(Vector n1)
{
	cout << "����� �������� (" << x << "," << y << ") � (" << n1.x << "," << n1.y <<") = ";
	return Vector({this->x + n1.x, this->y + n1.y });
}

double Vector::Get_Length()
{
	cout << "����� ������� (" << x << "," << y << ") = ";
	double u =pow((x-0),2);
	double v = pow((y-0),2);
	return (sqrt(u+v));
}
