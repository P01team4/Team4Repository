#include <iostream>
#include "Game.h"
using namespace std;
int main()
{

	string nick;
	Chose game({ "New Game", "Exit" });


	switch (game.getChose())
	{
		case 1:
		{
			cout << "\033[2J\033[1;1H";
			cout << "Nick: ";
			cin >> nick;
			Game j(nick);
			break;
		}
		case 2:
		{

			break;
		}
	}

}

