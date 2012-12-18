/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月29日, 下午8:33
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		long long ball,ps,os;
		cin >> ball >> ps >> os;
		if (ball>7)
		{
			if (8*(ball-6)+27+ps>=os)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		else
		{
			if ((8-ball+7)*ball/2+ps>=os)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	return 0;
}