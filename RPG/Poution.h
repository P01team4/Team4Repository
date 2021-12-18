#pragma once
#include <iostream>
using namespace std;
class Poution
{
	string poution;
	int hp;
	int mp;
	int maxhp;
	int maxmp;
public:
	Poution(string poutiont, int hpp, int mpp , int maxhpp , int maxmpp) : poution{ poutiont }, hp{ hpp },mp{ mpp },maxhp{ maxhpp }, maxmp{ maxmpp } {}
	int GetHP()
	{
		if (poution == "Heal Potion")
		{
			
			hp += 20;
			if (hp > maxhp)
			{
				return maxhp;
			}
			
			else
			{
				return hp;
			}
		}
		else
			return hp;
	}
	int GetMP()
	{
		if (poution == "Mana Potion")
		{
			mp += 20;
			if (mp > maxmp)
			{
				return maxmp;
			}
			else
			{
				return mp;
			}
		}
		else
			return mp;
	}
};

