#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

template<typename T1, typename T2>

class MinClass
{

public:

	T1 value1;
	T2 value2;

	MinClass(T1 v1, T2 v2) : value1(v1), value2(v2){}

	double Min()
	{

		if (value1 < value2)
		{

			return value1;
		
		}

		return value2;
	
	}

};

int main()
{
	
	SetConsoleOutputCP(65001);

	// int + int
	MinClass<int, int> a(10, 20);

	// float + float
	MinClass<float, float> b(1.5f, 3.2f);

	// double + double
	MinClass<double, double> c(5.8, 2.4);

	// int + float
	MinClass<int, float> d(10, 2.5f);

	// int + double
	MinClass<int, double> e(7, 9.8);

	// float + double
	MinClass<float, double> f(4.2f, 8.9);

	printf("int,int       : %f\n", a.Min());
	printf("float,float   : %f\n", b.Min());
	printf("double,double : %f\n", c.Min());

	printf("\nint,float     : %f\n", d.Min());
	printf("int,double    : %f\n", e.Min());
	printf("float,double  : %f\n", f.Min());

	return 0;

}