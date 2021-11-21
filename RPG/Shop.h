#pragma once
#include <iostream>
using namespace std;
class Shop
{
	int ok;
	int bronze;

	double damaegdone;
public:
	Shop(int bronzeZ,int okP,double damageP) : bronze{ bronzeZ }, ok{ okP }, damaegdone{ damageP }
	{
		
		switch (okP)
		{
		case 1:
			buySword();
			break;
		case 2:
			buySpear();
			break;

		case 3:
			cout << "Bye" << endl;
			break;
		}
	}
	void buySword()
	{
		cout << "\033[2J\033[1;1H";
		if (bronze < 10)
		{
			cout << "Sorry you dont have money for sword. Go away!" << endl;
		}
		else
		{
			cout << "Thank you for your purchase" << endl;
			damaegdone = 1.5;
			bronze -= 10;
		}
	}
	void buySpear()
	{
		cout << "\033[2J\033[1;1H";
		if (bronze < 15)
		{
			cout << "Sorry you dont have money for spear. Go away!" << endl;
		}
		else
		{
			cout << "Thank you for your purchase" << endl;
			damaegdone = 1.7;
			bronze -= 15;
		}
	}

	double getDamage()
	{
		return damaegdone;
	}
	int getBronze()
	{
		return bronze;
	}
};

