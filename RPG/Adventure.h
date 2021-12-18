#pragma once
#include <iostream>
#include "Chose.h"
#include "Locationstep.h"
#include "Haracterist.h"
using namespace std;
class Adventure
{
	int current;
	bool yes;
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
	


public:
	Adventure(string nickp, int damagep, int hpp, int maxhpp, int manap, int maxmanap, double weponp, int expswordp, int expspearp, int expfistp, int bronzep,char okp[22500]) : current{ 5624 }, yes{ 0 }, nick{ nickp }, damage{ damagep }, hp{ hpp }, maxhp{ maxhpp }, mana{ manap }, maxmana{ maxmanap }, wepon{ weponp }, expsword{ expswordp }, expspear{ expspearp }, expfist{ expfistp }, bronze{ bronzep }
	{

		while (yes == 0)
		{
			Chose Adven(lettertoword(okp[current]), { "Left","Top","Right","Back","Stats" });
			if (okp[current] == 'G')
			{
				Chose Adven(lettertoword(okp[current]), { "Left","Top","Right","Back","Stats","Go to City" });
			}
			else
			{
				Chose Adven(lettertoword(okp[current]), { "Left","Top","Right","Back","Stats" });
			}
			switch (Adven.getChose())
			{
				case 1:
				{
					if (okp[current - 1] == '0')
					{
						cout << "I cant it Rock" << endl;
						break;
					}
					else
					{
						current--;
						Locationstep step(okp[current], current);
						if (step.Change() == 1)
						{

						}
	
						break;
					}
					
				}
				case 2:
				{
					if (okp[current - 150] == '0')
					{
						cout << "I cant it Rock" << endl;
						break;
					}
					else
					{
						current -= 150;
						Locationstep step(okp[current], current);
						break;
					}
					
				}
				case 3:
				{
					if (okp[current + 1] == '0')
					{
						cout << "I cant it Rock" << endl;
						break;
					}
					else
					{
						current++;
						Locationstep step(okp[current], current);
						break;
					}
					
				}
				case 4:
				{
					if (okp[current + 150] == '0')
					{
						cout << "I cant it Rock" << endl;
						break;
					}
					else
					{
						current += 150;
						Locationstep step(okp[current], current);
						break;
					}
					
				}
				case 5:
				{
					Haracterist Har(nick, damage, hp, maxhp, mana, maxmana, wepon, expsword, expspear, expfist, bronze);
					Chose hor(Har.GetHar(), { "Change Name","Back" });
					nick = Har.NewName(hor.getChose());
					break;
				}
				case 6:
				{
					yes = 1;
					break;
				}
			}

		}

		
		
	}
	string lettertoword(char letter)
	{
		if (letter == 'G')
		{
			return "Gorod";
		}
		else if (letter == 'T')
		{
			return "Tropic";
		}
		else if (letter == 'F')
		{
			return "Forest";
		}
		if (letter == 'R')
		{
			return "Ruine";
		}
		else if (letter == 'O')
		{
			return "Ocean";
		}
		else if (letter == 'C')
		{
			return "Cave";
		}
		if (letter == 'L')
		{
			return "Vulkan";
		}
		else if (letter == 'S')
		{
			return "Tundra";
		}
		else if (letter == 'M')
		{
			return "Mushrum";
		}
		else if (letter == 'D')
		{
			return "Dust";
		}
	}

};

