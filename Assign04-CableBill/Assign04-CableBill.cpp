// Assign04-CableBill.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	const	double BASIC_RESIDENTIAL	= 18.50;
	const	double BASIC_BUSINESS		= 75.00;
	const	double CONNECT_RESIDENTIAL	= 6.50;
	const	double CONNECT_BUSINESS		= 5.00;
	const	double PREMIUM_RESIDENTIAL	= 7.50;
	const	double PREMIUM_BUSINESS		= 50.00;
	
	char	installInput;
	char	installType;
	int		additional;
	int		premium;
	double	amount;
	
	cout << endl << "Residential or Business [R or B]?  ";
	cin >> installType;
	cout << endl << "How many  Additional Connections?  ";
	cin >> additional;
	cout << endl << "Total number of Premium Channels:  ";
	cin >> premium;

	if (installType == 'B' || installType == 'b')
	{
		if (additional < 9)
		{
			amount = BASIC_BUSINESS + (premium * PREMIUM_BUSINESS);
		}
		else
		{
			amount = BASIC_BUSINESS + ((additional - 9) * CONNECT_BUSINESS) + (premium * PREMIUM_BUSINESS);
		}
	}
	else 
	{
		amount = BASIC_RESIDENTIAL + (additional * CONNECT_RESIDENTIAL) + (premium * PREMIUM_RESIDENTIAL);
	}

	cout << fixed << setprecision(2) << endl;
	cout << endl << "Total amount of Cable Bill:  $" << amount;

	cout << endl << endl;
	system("pause");
    return 0;
}

