#include <iostream>
#include <string>
using namespace std;
class HpMpBars
{
	string full;
	int hp;
	int maxhp;
	int mp;
	int maxmp;
public:
	HpMpBars(int hpP, int maxhpP, int mnP, int maxmnP) : hp{ hpP }, maxhp{ maxhpP }, mp{ mnP }, maxmp{ maxmnP }, full{ "" } {}
	string getBars()
	{
		full.append("HP: [");
		for (int i = 1; i <= maxhp; ++i)
		{
			if (hp < i)
			{
				full.append(" ");
			}
			else
			{
				full.append("|");
			}
			
		}
		full.append("]\n");
		full.append("MP: {");
		for (int i = 1; i <= maxmp; ++i)
		{
			if (mp < i)
			{
				full.append(" ");

			}
			else
			{
				full.append("|");
			}
			
		}
		full.append("}\n");
		return full;

	}
};

