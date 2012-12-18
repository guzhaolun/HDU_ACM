/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月23日, 上午10:22
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long long hex_ten(string a)
{
	long long result=0;
	int start;
	bool isNegtive;
	if (a[0]=='-')
	{
		isNegtive=true;
		start=1;
	}
	else
	{
		isNegtive=false;
		if (a[0]=='+')
			start=1;
		else
			start=0;
	}
	for (int i=start; i<a.size(); i++)
	{
		switch (a[i])
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			result+=(int)(a[i]-'0')*pow(16.0,(double)a.size()-i-1);
			break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
			result+=(int)(a[i]-'A'+10)*pow(16.0,(double)a.size()-i-1);
			break;
		default:
			break;
		}
	}
	if (isNegtive)
		return 0-result;
	return result;
}

string ten_hex(long long a)
{
	bool isNegive;
	if (a>0)
		isNegive=false;
	else if (a<0)
	{
		isNegive=true;
		a=0-a;
	}
	else
		return "0";
	char unit[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	string result="";
	while (a!=0)
	{
		result+=unit[a%16];
		a/=16;
	}

	string m="";
	if (isNegive)
		m+='-';
	for (int i=result.size()-1; i>=0; i--)
		m+=result[i];
	return m;
}

int main()
{
	string a,b;
	while (cin >> a >> b)
	{
		cout << ten_hex(hex_ten(a)+hex_ten(b)) << endl;
	}
	return 0;
}