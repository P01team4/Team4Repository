#include <iostream>
using namespace std;
class HpMpBars
{
	int hp;
	int maxhp;
	int mp;
	int maxmp;
public:
	HpMpBars(int hpP, int maxhpP, int mnP, int maxmnP) : hp { hpP }, maxhp{ maxhpP },mp{ mnP } , maxmp{ maxmnP }{}
	void getBars()
	{
		cout << "HP: [";
		for (int i = 1; i <= maxhp; ++i)
		{
			if (hp <= i)
			{
				cout << " ";
			}
			else
			{
				cout << "|";
			}
			cout << "]" << endl;
		}
		cout << "MP: {";
		for (int i = 1; i <= maxmp; ++i)
		{
			if (mp <= i)
			{
				cout << " ";
			}
			else
			{
				cout << "|";
			}
			cout << "}" << endl;
		}

	}
};

