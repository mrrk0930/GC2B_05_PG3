#include <iostream>
#include <Windows.h>
#include <list>

using namespace std;

void PrintStations(const list<const char*>& stations, int year)
{

	printf("===== %d =====\n", year);

	for (const char* station : stations)
	{
		
		printf(" %s\n", station);

	}

	printf("\n");

}

int main()
{

	SetConsoleOutputCP(65001);

	list<const char*> yamanote1970 =
	{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	PrintStations(yamanote1970, 1970);

	list<const char*> yamanote2019 = yamanote1970;

	for (auto it = yamanote2019.begin(); it != yamanote2019.end(); ++it)
	{
		
		if (*it == "Tabata")
		{

			yamanote2019.insert(it, "Nishi-Nippori");
			break;

		}

	}

	PrintStations(yamanote2019, 2019);

	list<const char*> yamanote2022 = yamanote2019;

	for (auto it = yamanote2022.begin(); it != yamanote2022.end(); ++it)
	{

		if (*it == "Tamachi")
		{

			yamanote2022.insert(it, "Takanawa Gateway");
			break;
		
		
		}
	
	}

	PrintStations(yamanote2022, 2022);

	return 0;

}