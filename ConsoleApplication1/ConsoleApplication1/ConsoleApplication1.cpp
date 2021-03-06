// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Actor {
protected:
	int hp;
	int attack;
	int speed;
	int defense;
	string name;

public:
	virtual void takeDamage(int a) = 0;
};


class Player:protected Actor {
public:
	void takeDamage(int a) {
		hp = hp - (a - defense);
	}
	void getName() {
		cout << "Please enter a name." << endl;
		getline(cin, name);
	}

	void viewHealth() {
		cout << name << " HP: " << hp << endl;
	}

	int getAttack() {
		return attack;
	}

	string viewName() {
		return name;
	}

	Player() {
		hp = 100;
		attack = 50;
		defense = 20;
		speed = 30;
		getName();
	}
};

class Mummy : protected Actor {
public:
	
	void takeDamage(int a) {
		hp = hp - (a - defense);
	}
	
	int getAttack() {
		return attack;
	}

	Mummy() {
		hp = 20;
		attack = 30;
		defense = 5;
		speed = 25;
	}
};

class Werewolf : protected Actor {
public:
	void takeDamage(int a) {
		hp = hp - (a - defense);
	}

	int getAttack() {
		return attack;
	}

	Werewolf() {
		hp = 50;
		attack = 40;
		defense = 40;
		speed = 40;
	}
};

class Frankenstein : protected Actor {
public:
	void takeDamage(int a) {
		hp = hp - (a - defense);
	}

	int getAttack() {
		return attack;
	}

	Frankenstein() {
		hp = 150;
		attack = 80;
		defense = 20;
		speed = 25;
	}
};

class Dracula : protected Actor {
public:
	void takeDamage(int a) {
		hp = hp - (a - defense);
	}

	int getAttack() {
		return attack;
	}

	void setHp(int a) {
		hp = hp + a;
	}

	void setAtk(int a) {
		attack = attack + a;
	}

	void setDef(int a) {
		defense = defense + a;
	}

	void setSpeed(int a) {
		speed = speed + a;
	}

	Dracula() {
		hp = 200;
		attack = 200;
		defense = 200;
		speed = 200;
	}
};

int main()
{
	cout << "Welcom to Dracula's Revenge!" << endl;

	Player p1;
	Mummy m;
	Werewolf w;
	Frankenstein f;
	Dracula d;

	int c = 0;

	cout << p1.viewName() <<"!" << endl;
	Sleep(500);
	cout << "Your family name is known far and wide for slaying evil and saving humainity from the brink of chaos for generations." << endl;
	Sleep(2500);
	cout << "Now Dracula has returned once more to drive humanity into eternal darkness." << endl;
	Sleep(2500);
	cout << "Your time has come to venture forth to save humanity and fulfill your family legacy!" << endl;
	Sleep(2500);
	cout << "With your sword, Blessed Europa, and a wooden stake you set out to confront the Prince of Darkness in his domain." << endl;
	cout << "" << endl;
	Sleep(2500);

	cout << "As you approach the castle gate, a mysterious voice calls to you: "<<endl;
	Sleep(2500);
	cout << "You who would stand between darkness and humanity, if you would proceed any further then answer me: " << endl;
	Sleep(2500);
	cout << "Tutorial: Throughout your quest you will come across various questions that are related to the tales of Dracula." << endl;
	cout << "You will still proceed normally if you answer incorrectly, but the final confrontation will prove to be more difficult." << endl;
	Sleep(4000);

	do {
		cout << "What form is Dracula most known for transforming into?" << endl;
		cout << "" << endl;
		Sleep(2500);
		cout << "1: Bat" << endl;
		cout << "2: Wolf" << endl;
		cout << "3: Fog" << endl;
		
		cin >> c;

		switch (c) {
		case(1):
			cout << "The power of darkness wanes...." << endl;

			d.setHp(-20);
			d.setAtk(-20);
			d.setDef(-20);
			d.setSpeed(-20);
			Sleep(2500);
			break;

		case(2):
			cout << "The power of darkness grows!" << endl;
			d.setHp(20);
			d.setAtk(20);
			d.setDef(20);
			d.setSpeed(20);
			Sleep(2500);
			break;

		case(3):
			cout << "The power of darkness grows!" << endl;
			d.setHp(20);
			d.setAtk(20);
			d.setDef(20);
			d.setSpeed(20);
			Sleep(2500);
			break;

		default:
			cout << "Please enter a number corresponding with the choices." << endl;
			break;
		}

	} while (c != 1 && c != 2 && c != 3);
	

	return 0;
}

