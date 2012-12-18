/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午2:36
 */

#include <iostream>
using namespace std;

int CheckLength(char* password)
{
	int count=0;
	while (password[count]!='\0')
		count++;
	return count;
}

bool ContainUpper(char* password, int length)
{
	for (int i=0; i<length; i++)
	{
		if (password[i]>='A' && password[i]<='Z')
			return true;
	}
	return false;
}

bool ContainLower(char* password, int length)
{
	for (int i=0; i<length; i++)
	{
		if (password[i]>='a' && password[i]<='z')
			return true;
	}
	return false;
}

bool ContainNumber(char* password, int length)
{
	for (int i=0; i<length; i++)
	{
		if (password[i]>='0' && password[i]<='9')
			return true;
	}
	return false;
}

bool ContainSignal(char* password, int length)
{
	for (int i=0; i<length; i++)
	{
		if (password[i]=='~' || password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^')
			return true;
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	char* password;
	for (int i=0; i<n; i++)
	{
		password=new char[51];
		cin >> password;
		int count=CheckLength(password);
		if (count<8 || count>16)
		{
			cout << "NO" << endl;
			continue;
		}
		int unit=0;
		if (ContainUpper(password,count))
			unit++;
		if (ContainLower(password,count))
			unit++;
		if (ContainNumber(password,count))
			unit++;
		if (ContainSignal(password,count))
			unit++;
		if (unit>=3)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}