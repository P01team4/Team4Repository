#pragma once
#include <iostream>
#include <conio.h>
#include <cstdarg>

using namespace std;
class Chose
{
	int ok;
	char ch;
	int a;
	string stri;
	string* str;
public:
	
	Chose(string strpp,const initializer_list<string> &args) : ok { int(args.size()) }, a{ 0 } , stri{ strpp }
	{
		
		int i = 0;
		str = new string[ok];
		for (string strp : args)
		{
			str[i++] =  strp;
		}
	}
	int getChose()
	{
		while (ch != ' ' and ch != 13) {
			cout << stri << endl;
			for (int i = 0; i < ok; ++i)
			{
				if (i == a)
				{
					cout << "-";
				}
				cout << str[i] << endl;
			}
			ch = _getch();
			if (ch == 'w' or ch =='W' or ch =='H')
			{
				a--;
				if (a < 0)
				{
					a = ok - 1;
				}
			}
			else if (ch == 's' or ch == 'S' or ch == 'P')
			{
				a++;
				if (a > ok-1)
				{
					a = 0;
				}
			}
			cout << "\033[2J\033[1;1H";
		}
		return a+1;
	}

	
	~Chose()
	{
		delete[] str;
	}
};

