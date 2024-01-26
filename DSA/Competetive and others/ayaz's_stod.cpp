#include <iostream>
using namespace std;
int getNo(char ch)
{
	return (int)ch - '0';
}
double getCurrency(const char m[])
{
	int i = 0;
	int bpt = 0;
	int aptz = 0;
	double apt = 0.0;
	for (i = 0; m[i] != '.' && m[i] != '\0'; i++)
	{
		if (m[i] >= '0' && m[i] <= '9')
			bpt = bpt * 10 + getNo(m[i]);
	}
	if (m[i] == '.')
	{
		for (i = i + 1; m[i] == '0'; i++)
			aptz++;
		for (; m[i] != '\0'; i++)
			if (m[i] >= '0' && m[i] <= '9')
				apt = apt * 10 + getNo(m[i]);
	}
	for (; apt >= 1.0; apt /= 10.0);
	for (int t = 0; t < aptz; t++)
		apt /= 10.0;
	return bpt + apt;
}
void displayCurrency(char strMoney[], double money)
{
	char mny[33];
	int c = 30;
	int tempMny = money;
	for (; tempMny > 0; c--)
	{
		if (c % 4 == 2)
			mny[c] = ',';
		else
		{
			mny[c] = (tempMny % 10) + 48;
			tempMny /= 10;
		}
	}
	mny[c] = '$';
	mny[30] = '.';
	int tm = (money - (int)money) * 100;
	for (int t = 32; t >= 31; t--)
	{
		mny[t] = tm % 10 + 48;
		tm /= 10;
	}
	//char strMoney[33 - c];
	for (int i = c; i <= 34; i++)
		strMoney[i - c] = mny[i];
	strMoney[33 - c] = '\0';
	//cout << strMoney << endl;
}
int main()
{
	double d;
	char str[30];
	cout << "Enter currency (Double) : ";
	cin >> d;
	displayCurrency(str, d);
	cout << str << endl;
	cout << "Enter currency (C-String) : ";
	cin >> str;
	d = getCurrency(str);
	cout << d;
	return 0;
}