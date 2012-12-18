/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午2:25
 */

#include <iostream>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int a,b;
		cin >> a >> b;
		int total_a=0;
		int total_b=0;
		for (int m=1; m<a; m++)
		{
			if (a%m==0)
				total_a+=m;
		}
		for (int n=1; n<b; n++)
		{
			if (b%n==0)
				total_b+=n;
		}
		if (total_a==b && total_b==a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

