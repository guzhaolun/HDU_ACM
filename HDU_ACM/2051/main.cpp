/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月22日, 下午12:17
 */

#include <iostream>
using namespace std;

long long ten_two(int a)
{
	long long result=0;
	long long multi=1;
	while (a>0)
	{
		result+=(a%2)*multi;
		multi*=10;
		a/=2;
	}
	return result;
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << ten_two(n) << endl;
	}
	return 0;
}