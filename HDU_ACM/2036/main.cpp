/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月15日, 下午10:11
 * 
 * HDU-2036
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

class Point
{
public:
	int x;
	int y;
};

int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(1);
	Point* points;
	while (n!=0)
	{
		points=new Point[n];
		for (int i=0; i<n; i++)
		{
			cin >> points[i].x >> points[i].y;
		}
		double area=0;
		for (int j=0,k=1; j<n; j++,k++)
		{
			k=k%n;
			area+=points[j].x*points[k].y-points[k].x*points[j].y;
		}
		cout << area/2 << endl;
		delete[] points;
		cin >> n;
	}
	return 0;
}