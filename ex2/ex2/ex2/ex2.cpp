// ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int winF = 0;
int winS = 0;

void result(int win)
{
	if (win == 1) winF++;
	else if (win == 2) winS++;
	cout << winF << " : " << winS << endl;
}

void winnerM (int f, int s)
{
	int winner;

	if (f == 0)
	{
		if (s == 0) winner = 0;
		if (s == 1) winner = 2;
		if (s == 2) winner = 1;
	}
	if (f == 1)
	{
		if (s == 0) winner = 1;
		if (s == 1) winner = 0;
		if (s == 2) winner = 2;
	}
	if (f == 2)
	{
		if (s == 0) winner = 2;
		if (s == 1) winner = 1;
		if (s == 2) winner = 0;
	}
	result(winner);
}

void choices()
{
	int first, second;
	cout << "What do you play ? - R(0),P(1),S(2)   ";
	cin >> first;
	cout << "What do you play ? - R(0),P(1),S(2)   ";
	cin >> second;
	winnerM(first, second);
}

int main()
{
	/*char chr;
	cin >> chr;
	if (chr>=65 && chr <=90)
	{
		chr += 32;
	}
	else if (chr >= 97 && chr <= 122)
	{
		chr -= 32;
	}
	else { cout << "Not a latin symbol"; }
	cout << chr << endl;*/


	/*int days, month;
	cin >> days >> month;
	for (int i = month; i > 0; i--)
	{
		if (month == 1, month == 3, month == 5, month == 7, month == 8, month == 10, month == 12) days += 31;
		else if (month == 4, month == 6, month == 9, month == 11) days += 30;
		else if (month == 2) days += 29;
	}
	if (days % 7 == 1) cout << "Monday\n";
	if (days % 7 == 2) cout << "Tuesday\n";
	if (days % 7 == 3) cout << "Wednesday\n";
	if (days % 7 == 4) cout << "Thursday\n";
	if (days % 7 == 5) cout << "Friday\n";
	if (days % 7 == 6) cout << "Saturday\n";
	if (days % 7 == 0) cout << "Sunday\n";*/


	/*int num, numDigits,tempNum, tempPow, finalNum;
	cin >> num;
	numDigits = 0;
	finalNum = 0;
	
	for (int i = 0;; i++)
	{
		if (num / pow(10, i) < 1)
		{
			numDigits = i;
			break;
		}
	}
	for (int i = 0;i<=numDigits; i++)
	{
		tempPow = pow(10, i);
		tempNum = num % tempPow;
		for (;;)
		{
			if (tempNum < 10) break;
			tempNum /= 10;
		}
		finalNum += tempNum*pow(10, numDigits-i);
	}
	cout << (num == finalNum) << endl;*/


	/*int n, m, ans;
	ans = 1;
	cin >> n >> m;
	for (int i = 1;i<=m;i++)
	{
		ans *= n;
	}
	cout << ans << endl;*/


	/*int n, m;
	cin >> n >> m;
	for (int i = n; i > 0; i--)
	{
		if (i%m == 0) cout << i << endl;
	}*/


	/*int n, num, flag;
	flag = 1;
	cin >> n;
	num = 2;
	for (num; num <= n; num++)
	{
		flag = 1;
		for (int i = 2; i < num;i++)
		{
			if (num%i == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1) cout << num << endl;

	}*/


	choices();
	char ans;
	for (;;)
	{
		cout << "Wanna play again ? (Y/N)   ";
		cin >> ans;
		if (ans == 'Y') choices();
		else if (ans == 'N') break;
	}

    return 0;
}

