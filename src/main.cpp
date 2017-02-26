#include "SeriesFF.h"

int main()
{
	float n;
	int res=0;
	
	do{
		
	SeriesFF s(n);

	std::cout<<"Ingrese el numero a calcular (de 1 a 34):  "<<std::endl;
	std::cin>> n ; 
	
	if (n>0 && n<=34)
	{
		std::cout<<"El fibonacciIt es:  "<<std::fixed<<std::setprecision(0)<<s.fibonacciIt(n)<<std::endl;
		std::cout<<"El fibonacciRec es:  "<<std::fixed<<std::setprecision(0)<<s.fibonacciRec(n)<<std::endl;
		std::cout<<"El factorialIt es:  "<<std::fixed<<std::setprecision(0)<<s.factorialIt(n)<<std::endl;
		std::cout<<"El factorialRec es:  "<<std::fixed<<std::setprecision(0)<<s.factorialRec(n)<<std::endl;	
	}
	else
		std::cout<<"Ingreso un caracter incorrecto."<<std::endl;
	n=0;
	res=0;
	std::cout<<"¿Quiere intentar de nuevo?:"<<std::endl;
	std::cout<<"Si- 1 No- 0 "<<std::endl;
	std::cin>> res ;
	
	}while(res==1);
	
	return 0;	
}