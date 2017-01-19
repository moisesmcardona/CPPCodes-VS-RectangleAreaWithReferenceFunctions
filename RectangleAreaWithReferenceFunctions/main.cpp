#include <iostream>
#include <iomanip>
using namespace std;
void dataentry(float &length, float &width);
void calculate(float &area, float length, float width);
void display(float area);

int main()
{
	float length, width, area;
	dataentry(length, width);
	calculate(area, length, width);
	display(area);
	system("pause");
	return 0;
}

void dataentry(float &length, float &width)
{
		do
		{
			cout << "Enter the length of the rectangle: ";
			cin >> length;
		} while (length <= 0.0);
		do
		{
			cout << "Enter the width of the rectangle: ";
			cin >> width;
		} while (width <= 0.0);		
}
void calculate(float &area, float length, float width)
{
	area = length * width;
}
void display(float area)
{
	cout << "The area of the rectangle is: " << setprecision(2) << fixed << showpoint << area << endl;
}
/*
Enter the length of the triangle: 8
Enter the width of the rectangle: 5
The area of the rectangle is: 40.00
Press any key to continue . . .
*/