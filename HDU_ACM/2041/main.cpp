/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午2:34
 */

#include <iostream>
using namespace std;

int functionToGoUp(int steps)
{
	if (steps==1)
		return 1;
	if (steps==2)
		return 2;
	int* a=new int[steps];
	a[0]=1;
	a[1]=2;
	for (int i=2; i<steps; i++)
		a[i]=a[i-1]+a[i-2];
	return a[steps-1];
}

int main()
{
	int n=0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int steps;
		cin >> steps;
		cout << functionToGoUp(steps-1) << endl;
	}
	return 0;
}
