#pragma once
#include <iostream>
#include <conio.h>
#include "HpMpBars.h"
#include "Chose.h"
#include "Poution.h"
using namespace std;
class Haracterist
{
	string nick;
	string bag[80];
	int damage;
	int hp;
	int maxhp;
	int mana;
	int maxmana;
	double wepon;
	int expsword;
	int expspear;
	int expfist;
	int exp;
	
	int bronze;
	string full;

public:
	Haracterist(string nickp, int damagep, int hpp, int maxhpp, int manap, int maxmanap, double weponp, int expswordp, int expspearp, int expfistp, int bronzep,string bagp) : nick{ nickp }, damage{ damagep }, hp{ hpp }, maxhp{ maxhpp }, mana{ manap }, maxmana{ maxmanap }, wepon{ weponp }, expsword{ expswordp }, expspear{ expspearp }, expfist{ expfistp }, bronze{ bronzep }, full{ "" }
	{
		for (int i = 0; i < 80; ++i)
		{
			bag[i] = bagp[i];
		}
	}
	string getwepon()
	{
		if (wepon == 1)
		{
			exp = expfist;
			return "Fist";
		}
		else if (wepon == 1.5)
		{
			exp = expsword;
			return "Sword";
		}
		else if (wepon == 1.7)
		{
			exp = expspear;
			return "Spear";
		}
		else
		{
			exp = 0;
			return "???";
		}
	}
	string GetHar()
	{
		HpMpBars Bars(hp, maxhp, mana, maxmana);
		full.append("Nick: ");
		full.append(nick);
		full.append("\n");

		full.append("Wepon: ");
		full.append(getwepon());
		full.append("\n");

		full.append("LVL ");
		full.append(getwepon());
		full.append(": ");
		full.append(to_string((exp - (exp % 10)) / 10));
		full.append("\n");
		
		full.append("Damaege: ");
		full.append(to_string(int(damage * (wepon + ((exp - (exp % 10)) / 20)))));
		full.append("\n");

		full.append(Bars.getBars());

		full.append("Bronze: ");
		full.append(to_string(bronze));
		full.append("\n");

		return full;

	}
	string NewName(int okps)
	{
		switch(okps)
		{
			case 1:
				cout << "Nick: ";
				cin >> nick;
				cout << "\033[2J\033[1;1H";
				
				break;
			case 2:
				string ko;
				Chose Bager("Bag",bag);
				Poution pou(bag[Bager.getchoseplus()], hp, mana, maxhp, maxmana);
				pou.GetHP();
				pou.GetMP();
				bag[Bager.getnumber()] = "";
				for (int i = Bager.getnumber(); i < 80; ++i)
				{
					if (bag[i + 1] == "")
					{
						break;
					}
					else
					{
						ko = i + 1;
						bag[i + 1] = "";
						bag[i] = ko;
					}
				}

				
				break;
			case 3:
				
				break;
		}
		return nick;
	}
};


