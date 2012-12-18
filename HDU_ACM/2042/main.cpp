/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午2:35
 */

#include <iostream>
using namespace std;

int main()
{
	const int sheep=3;
	int n=0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int stops;
		cin >> stops;
		int total=sheep;
		for (int j=0; j<stops; j++)
			total=(total-1)*2;
		cout << total << endl;
	}
	return 0;
}
