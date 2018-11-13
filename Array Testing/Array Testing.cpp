// In the name of God !
//
//
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int A[10];
	int i;
	cout << "Enter 10 numbers :"<<endl;
	for (i = 1; i <= 10; i++)
		cin >> A[i];
	for (i = 1; i <= 10; i++)
		cout << A[i] << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\