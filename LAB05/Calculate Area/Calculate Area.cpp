#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846; 
double calculateCircleArea(double radius) {
	return PI * radius * radius;
}
double calculateRectangleArea(double length, double width) {
	return length * width;
}

int main() {
	int Circle ;
	cout << "r ="; 
	cin >> Circle;
	cout << "(W x L) =  ? "<< endl;
	double width, length;
	cout << "(W) =   ";
	cin >> width;
	cout << "(L) =  ";
	cin >>  length;
	
	double circleArea = calculateCircleArea(Circle);
	cout << "CircleArea =  " << circleArea << endl;
	double rectangleArea = calculateRectangleArea(width, length);
	cout << "rectangleArea = "  << rectangleArea << endl;
	


	
	
	return 0;
}