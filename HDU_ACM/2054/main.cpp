/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月22日, 下午1:13
 */

#include <iostream>
#include <string>
using namespace std;

string format(string a)
{
	int head,tail;
	for (int i=0; i<a.size(); i++)
		if (a[i]!='0')
		{
			head=i;
			break;
		}
	
	int dot=a.find('.',0);
	if (dot<a.size() && dot>=0)
		for (int i=a.size()-1; i>=dot; i--)
			if (a[i]!='0')
			{
				tail=i;
				break;
			}
	if (tail==dot)
		tail--;
	return a.substr(head,tail-head+1);
}

int main()
{
	string a,b;
	while (cin >> a >> b)
	{
		if (format(a).compare(format(b))==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}