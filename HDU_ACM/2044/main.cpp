/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午3:06
 * 
 * 注意点: double输出要进行控制...不然会出现科学计数法
 * 
 * 
 */
#include <iostream>
#include <iomanip>
using namespace std;

double PathCount(int end)
{
	double* a=new double[end];
	a[0]=1;
	a[1]=2;
	for (int i=2; i<end; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return a[end-1];
}

/*
 * 
 */
int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(0);
	for (int i=0; i<n; i++)
	{
		int a,b;
		cin >> a >> b;
		int end=b-a;
		cout << PathCount(end) << endl;
	}
}