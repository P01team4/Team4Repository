#include <iostream>
#include <cstdarg>

using namespace std;
class Chose
{
	int ok;
	string* str;
public:
	Chose(const initializer_list<string> &args) : ok { int(args.size()) }
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
		for (int i = 0; i < ok; ++i)
		{
			cout << i + 1 << " - " << str[i] << endl;
		}
		int a;
		cin >> a;
		cout << "\033[2J\033[1;1H";
		return a;
	}
	~Chose()
	{
		delete[] str;
	}
};

