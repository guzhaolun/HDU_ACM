/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月22日, 下午1:08
 */
#include <iostream>
using namespace std;

int f(int n)
{
	int count=0;
	for (int i=1; i<=n; i++)
		if (n%i==0)
			count++;
	return count;
}

int main()
{
	int n;
	while (cin >> n)
		cout << f(n)%2 << endl;
	return 0;
}