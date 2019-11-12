

/*
 * power.c
 *
 *  Created on: 10 Nov 2019
 *      Author: oriel
 */
#define E 2.718282
#include "stdio.h"
#include "myMath.h"


double Exp(int x){
	if(x==0)
		return 1.0;
	if(x<0)
		return 1/Exp(-1*x);
	double ans = E;
	for(int i = 1; i<x; i++){
		ans *= E;
	}
	return ans;

}
double Pow(double x, int y){
	if(y==0)
		return 1.0;
	if(y<0)
		return 1/Pow(x,-1*y);
	double ans = x;
	for(int i = 1; i<y; i++){
		ans *= x;
	}
	return ans;

}


