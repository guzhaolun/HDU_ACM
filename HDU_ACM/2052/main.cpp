/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月22日, 下午12:50
 */

#include <iostream>
using namespace std;

int main()
{
	int w,h;
	while (cin >> w >> h)
	{
		cout << '+';
		for (int i=0; i<w; i++)
			cout << '-';
		cout << '+' << endl;
		for (int i=0; i<h; i++)
		{
			cout << '|';
			for (int j=0; j<w; j++)
				cout << ' ';
			cout << '|' << endl;
		}
		cout << '+';
		for (int i=0; i<w; i++)
			cout << '-';
		cout << "+\n" << endl;
	}
	return 0;
}