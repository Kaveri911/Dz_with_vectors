#include "Circle.h"

void Circle::Square()
{
    cout << "������� ���������� c �������� "<<r<<" = ";
    cout << PI * r * r << endl;
}

void Circle::Sec_Square(double a)
{
    cout << "������� ������� � "<<a<<"� ���������� � �������� "<<r<<" = ";
    cout << (PI * r * r * a) / 360 << endl;
}
