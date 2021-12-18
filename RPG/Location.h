
#include <iostream>
#include <ctime>
using namespace std;
    
class Location
{  
	char ok[22500];
	int a;
public:
	Location() : a{ 0 }
	{
		ok[5624] = 'G';
		srand(time(0));
		for (int i = 0; i < 22500; ++i)
		{

			
			
			if (a < 50)
			{
				if (i - a * 150 < 50)
				{
					ok[i] = 'D';
				}
				else if (i - a * 150 > 100)
				{
					ok[i] = 'T';
				}
				else if (i - a * 150 > 50 && i - a * 150 < 100)
				{
					ok[i] = 'O';
				}
				
			}
			else if (a>50 && a < 100)
			{
				if (i - a * 150 < 50)
				{
					ok[i] = 'M';
				}
				else if (i - a * 150 > 100)
				{
					ok[i] = 'F';
				}
				else if (i - a * 150 > 50 && i - a * 150 < 100)
				{
					ok[i] = 'R';
				}
			}
			else if (a > 100)
			{
				if (i - a * 150 < 50)
				{
					ok[i] = 'T';
				}
				else if (i - a * 150 > 100)
				{
					ok[i] = 'L';
				}
				else if (i - a * 150 > 50 && i - a * 150 < 100)
				{
					ok[i] = 'C';
				}
			}
			if ((i + 1) % 150 == 0)
			{
				a++;
			}
			if ((1 + rand() % 100) <= 3)
			{
				if (i == 5624)
				{
					ok[i] = 'G';
				}
				else
				{
					ok[i] = '0';
				}
			}
		}
		
	}
	
	char* getmap()
	{
		return ok;
	}

};
