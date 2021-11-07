#include <iostream>
#include "Chose.h"
#include "Shop.h"
using namespace std;

class Game
{
	string nick;
	int hp;
	int maxhp;
	int mana;
	int maxmana;
	int damage;
	double wepon;
	int expsword;
	int expspear;
	int expfist;
	int expmana;
	int bronze;
public:
	Game(string nickP) : nick{ nickP }, hp{ 100 }, maxhp{ 100 }, mana{ 100 }, maxmana{ 100 }, damage{ 4 }, wepon{ 1 }, expsword{ 0 }, expspear{ 0 }, expfist{ 0 }, expmana{ 0 } { City(); }
	void City()
	{
		cout << "\033[2J\033[1;1H";
		
		Chose city({ "Shop", "Adventure", "Player", "Exit" });
		while(1)
		{ 
			cout << "City" << endl;
			switch (city.getChose())
			{
				case 1: // Shop
				{
					Chose Shope({ "Sword - 10 br", "Spear - 15 br", "Back" });
					cout << "Hello traveler! Buy what you want"<< endl;
					Shop sh(bronze, Shope.getChose(), damage);
					wepon = sh.getDamage();
					bronze = sh.getBronze();
				}
				case 2: // Adventure
				{

					break;
				}

				case 3: // Player
				{
					break;
				}

				case 4: // Exit
				{
					break;
				}
				break;
			}
		}
	}
};













