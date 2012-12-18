/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月29日, 下午8:57
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	int n;
	cin >> n;
	while (n--)
	{
		int course;
		cin >> course;
		double totalcredit=0;
		double totalscore=0;
		bool exist=true;
		while (course--)
		{
			string name;
			double credit,score;
			cin >> name >> credit >> score;
			if (score<60)
				exist=false;
			totalcredit+=credit;
			totalscore+=score*credit;
		}
		if (n!=0)
		{
			if (exist)
				cout << totalscore/totalcredit << endl << endl;
			else
				cout << "Sorry!\n" << endl;
		}
		else
		{
			if (exist)
				cout << totalscore/totalcredit << endl;
			else
				cout << "Sorry!" << endl;
		}
	}
	return 0;
}