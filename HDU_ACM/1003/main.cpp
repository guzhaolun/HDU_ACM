/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2011年1月29日, 上午10:52
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
    int t,n;
    int* m;
    while (cin >> t)
    {
        cin >> n;
        m=new int[n];
        for (int i=0; i<t; i++)
        {
            for (int j=0; j<n; j++)
            {
                cin >> m[j];
            }
        }
    }
    return 0;
}

