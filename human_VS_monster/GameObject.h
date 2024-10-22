#pragma once

class GameObject
{
protected:
	int distance;   //moving
	int x, y;   //present location

public:
	GameObject(int starX, int starY, int distance);
	virtual ~GameObject();
	virtual void move() = 0;
	virtual char getShape() = 0;
	int getX();
	int getY();
	bool collide(GameObject* p);
};

