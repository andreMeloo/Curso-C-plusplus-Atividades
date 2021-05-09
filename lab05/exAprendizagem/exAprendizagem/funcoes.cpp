#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include<math.h>

double modulo(double c1, double c2)
{
	return sqrt(pow(c1, 2) + pow(c2, 2));
}

double retornaGraus(double a, double b)
{
	return (atan2(b, a) * 180) / M_PI;
}