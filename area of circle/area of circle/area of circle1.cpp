#include<iostream>
#include<math.h>
using namespace std;
# define Pi 3.14
float getArea(float r) {
	float area;
	area = Pi * pow(r, 2);
	return area;
}
int main() {
	float r, area;
	cout << "Enter Radius of the circle:\n";
	cin >> r;
	cout << "==================\n";
	area = getArea(r);
	cout << "The area is : " << area << endl;
	return 0;
}