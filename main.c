/*
 * main.c
 *
 *  Created on: 10 Nov 2019
 *      Author: oriel
 */
#include "stdio.h"
#include "math.h"
#include "myMath.h"

int main(){
	double x;
	printf("Please insert a real number:\n");
	scanf("%lf",&x);
	float ansi = sub(add(Exp((int)x),Pow(x,3)),2.0);
	float ansii = add(mul(x,3),mul(Pow(x,2),2));
	float ansiii = sub(div(mul(Pow(x,3),4),5),mul(x,2));
	printf("The value of f(x) = e^x + x^3 -2 at the point x = %0.4lf is %0.4f\n", x, ansi);
	printf("The value of f(x) = 3x + 2x^2 at the point x = %0.4lf is %0.4f\n", x, ansii);
	printf("The value of f(x) = (4x^3)/5 -2x at the point x = %0.4lf is %0.4f\n", x, ansiii);
	return 0;
}


