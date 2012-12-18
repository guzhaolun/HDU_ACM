/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月22日, 下午8:10
 */

#include <iostream>
using namespace std;

int f(char a)
{
	if (a>='a'&&a<='z')
		return 0-(a-'a'+1);
	else
		return a-'A'+1;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int y;
		char x;
		cin >> x >> y;
		cout << y+f(x) << endl;
	}
	return 0;
}