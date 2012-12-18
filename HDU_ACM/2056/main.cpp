/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月22日, 下午8:19
 */
#include <iostream>
#include <iomanip>
using namespace std;

void swap(double &a, double &b)
{
	double c=a;
	a=b;
	b=c;
}

double getMix(double a, double b, double c, double d)
{
	if (a>b)
		swap(a,b);
	if (c>d)
		swap(c,d);
	if (b<=c)
		return 0;
	if (a<=c)
	{
		if (b<d)
			return b-c;
		return d-c;
	}
	if (b<=d)
		return b-a;
	if (a<d)
		return d-a;
	return 0;
}

int main()
{
	cout << fixed << setprecision(2);
	double x1,x2,x3,x4;
	double y1,y2,y3,y4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		cout << getMix(x1,x2,x3,x4)*getMix(y1,y2,y3,y4) << endl;
	}
	return 0;
}