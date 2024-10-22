#include <iostream>
#include <string>
#include <vector>
#include "GameObject.h"
#include "Human.h"
#include "Monster.h"
#include "Food.h"
#include "Game.h"

using namespace std;

int main() {

	Game* g = new Game;
	g->game();
	delete g;



	return 0;
}