#include "SeriesFF.h"

SeriesFF::SeriesFF(float n)
{
	this->n=n;
}

float SeriesFF::fibonacciIt(float n)
{
	if (n < 2)
		return n;

	float a=0,b=1,c=0;

	for (float i = 2; i <= n; ++i)
	{
		c=a+b;
		a=b;
		b=c;
	}

	return c;
}

float SeriesFF::fibonacciRec(float n)
{
	if (n < 2)
		return n;

	return fibonacciRec(n-1)+fibonacciRec(n-2);
}

float SeriesFF::factorialIt(float n)
{
	if (n < 2)
		return 1;
	
	float a=1,i;

	for (float i = 2; i <= n; ++i)
		a*=i;
	
	return a;
}

float SeriesFF::factorialRec(float n)
{
	if (n < 2)
		return 1;
	
	return factorialRec(n-1)*n;
}