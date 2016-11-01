#include <iostream>
#include <string>

using namespace std;

int main()
{
	int playerDamage = 100;
	int dragonHealth = 200;
	string playerResponse;
	string defeat = "You didn't hit the dragon, so he ate you and imprisoned the damsel forever.\n\n";
	string victory = "You slain the mighty dragon and saved the damsel, congrats!\n\n";

	cout << "Welcome to the Console knight video game!\n\n" "You are a knight who stumbled upon a castle.\n" << "You see a damsel in distress shouting for help from the window of the highest tower.\n" << "A dragon with 200HP appears before you, do you want to hit him with your mighty sword that deals 100dmg y/n?\n";
	cin >> playerResponse;

	if (playerResponse == ("y")) {
		dragonHealth = dragonHealth - playerDamage;
		cout << "You dealt " << playerDamage << " damage to the dragon. He is left with " << dragonHealth << " health and is dazed in pain.\n" << "Do you want to hit it again while he is weak y/n?\n";
		cin >> playerResponse;
		if (playerResponse == ("y"))
			cout << victory;
		else
			cout << defeat;
	}
	else {
		cout << defeat;
	}
	system("PAUSE");
	return 0;
}

asd
