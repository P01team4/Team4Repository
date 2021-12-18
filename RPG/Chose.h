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

	Chose(string strpp, const initializer_list<string>& args) : ok{ int(args.size()) }, a{ 0 }, b{ 0 }, c{ 0 }, oka{ 150 }, okb{ 150 }, stri{ strpp }
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
	int getchoseplus()
	{
		while (ch != ' ' and ch != 13 and ch != 27) {
			cout << stri << endl;
			for (int i = 0; i < oka; ++i)
			{
				for (int j = 0; j < okb;++j)
				{
					if (i == a && j == b)
					{
						cout << "-";
					}
					cout << str[oka*okb*c+oka*j+i] <<" " ;
				}
				cout << endl;
				
			}
			cout << c+1 << endl;
			cout << "Press ESC to leave" << endl;
			ch = _getch();

			if (ch == 'w' or ch == 'W' or ch == 'H')
			{
				a--;
				if (a < 0)
				{
					a = oka - 1;
					
					while (str[oka * okb * c + oka * b + a] == "")
					{
						a--;
					}
				}
			}
			else if (ch == 'd' or ch == 'D')
			{
				b++;
				
				if (b > okb-1)
				{
					b=0;
					c += 1;
					
				}
				if (oka * okb * c + oka * b + a > ok - 1)
				{
					c = 0;
					b = 0;
				}
				
			}
			else if (ch == 'a' or ch == 'A')
			{
				b--;
				if (b < 0)
				{
					
					c -= 1;
					b = okb - 1;
					if (c < 0)
					{
						c = csize - 1;
						if (oka * okb * c + oka * b + a > ok - 1)
						{
							b = 0;
							if (oka * okb * c + oka * b + a > ok - 1)
							{
								c -= 1;
								b = okb - 1;
								
							}
						}
						
					}
					
				}
			}
			else if (ch == 's' or ch == 'S' or ch == 'P')
			{
				a++;
				if (a > (oka - 1) or str[oka * okb * c + oka * b + a] == "")
				{
					a = 0;
				}
			}
			cout << "\033[2J\033[1;1H";
		}
		return oka * okb * c + oka * b + a + 1;
	}

	
	~Chose()
	{
		delete[] str;
	}
};

