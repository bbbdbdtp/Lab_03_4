// Lab_03_4.cpp
// ��� �����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 27

#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if (((x + R) * (x + R) + (y - R) * (y - R) <= R * R) ||
		((y >= -R) && (y <= 0) && (x >= 0) && (x <= 2 * R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}