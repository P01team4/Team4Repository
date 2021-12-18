#include <iostream>
#include "Chose.h"
#include "Shop.h"
#include "Haracterist.h"
#include "Location.h"
#include "Adventure.h"
using namespace std;

class Game
{
	string nick;
	string bag[80];
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
	Game(string nickP) : nick{ nickP }, hp{ 10 }, maxhp{ 10 }, mana{ 10 }, maxmana{ 10 }, damage{ 4 }, wepon{ 1 }, expsword{ 100 }, expspear{ 0 }, expfist{ 0 }, expmana{ 0 }, bronze{ 30 }  { City(); }
	void City()
	{
		cout << "\033[2J\033[1;1H";
		Location map();
		
		
		while(1)
		{ 
			Chose city("City",{ "Shop", "Adventure", "Player", "Exit" });
			switch (city.getChose())
			{
				case 1: // Shop
				{
					Chose Shope("Hello traveler! Buy what you want",{ "Sword - 10 br", "Spear - 15 br","Heal Potion - 5 br","Mana Potion - 5 br", "Back"});
					Shop sh(bronze, Shope.getchoseplus(), wepon);
					wepon = sh.getDamage();
					bronze = sh.getBronze();
					break;
				}
				case 2: // Adventure
				{
					Adventure gogo(nick,map.getmap());
					break;
				}

				case 3: // Player
				{
					Haracterist Har(nick, damage, hp, maxhp, mana, maxmana, wepon, expsword, expspear, expfist, bronze,bag);
					Chose hor(Har.GetHar(), {"Change Name","Bag","Back"});
					nick = Har.NewName(hor.getChose());
					break;
				}

				case 4: // Exit
				{
					break;
				}
				
			}
		}
	}
};













