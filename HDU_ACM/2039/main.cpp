/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午2:23
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		double a,b,c;
		cin >> a >> b >> c;
		if (a+b>c && b+c>a && c+a>b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

