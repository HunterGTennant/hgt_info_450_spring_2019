// assignment1.cpp : this program takes the user input for the radius of a circle and calculates the circumference

#include "pch.h"
#include <iostream>
using namespace std;

#define PI 3.141
double calculateCircumference(double &radius, double &circumference);

int main()
{
	double circumference, radius;
	cout << "Please enter the radius of you circle: ";
	cin >> radius; 
	circumference = calculateCircumference(radius,circumference);
	cout << "The Circumference of your circle is " << circumference << endl;
	
	return 0;
}

double calculateCircumference(double &radius, double &circumference)
{
	circumference = 2 * PI * radius;
	return circumference;
}
