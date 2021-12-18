#pragma once
#include <iostream>
using namespace std;
class Shop
{
	int ok;
	int bronze;
	string bag[80];
	double damaegdone;
public:
	Shop(int bronzeZ,int okP,double damageP,string bagp[80]) : bronze{ bronzeZ }, ok{ okP }, damaegdone{ damageP }
	{
		for (int i = 0; i < 80; ++i)
		{
			bag[i] = bagp[i];
		}
		switch (okP)
		{
		case 1:
			buySword();
			break;
		case 2:
			buySpear();
			break;
		case 3:
		{
			
		}
		case 4:
		{
			break;
		}
		case 5:
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
	void buyHealPotion()
	{
		cout << "\033[2J\033[1;1H";
		if (bronze < 15)
		{
			cout << "Sorry you dont have money for heal potion. Go away!" << endl;
		}
		else if (bag[79] != "")
		{
			cout << "Sorry your bag full. Go away!" << endl;
		}
		else
		{
			cout << "Thank you for your purchase" << endl;
			for (int i = 0; i < 80; ++i)
			{
				if (bag[i] == "")
				{
					bag[i] = "Heal Potion";
					break;
				}
			}
		}
	}
	void buyManaPotion()
	{
		cout << "\033[2J\033[1;1H";
		if (bronze < 15)
		{
			cout << "Sorry you dont have money for mana potion. Go away!" << endl;
		}
		else if (bag[79] != "")
		{
			cout << "Sorry your bag full. Go away!" << endl;
		}
		else
		{
			cout << "Thank you for your purchase" << endl;
			for (int i = 0; i < 80; ++i)
			{
				if (bag[i] == "")
				{
					bag[i] = "Mana Potion";
					break;
				}
			}
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

