#include "GameObject.h"

GameObject::GameObject(int starX, int starY, int distance)
{
	this->x = starX;
	this->y = starY;
	this->distance = distance;
}

GameObject::~GameObject()
{
}

int GameObject::getX()
{
	return x;
}

int GameObject::getY()
{
	return y;
}

bool GameObject::collide(GameObject* p)
{
	if (this->x == p->getX() && this->y == p->getY())
	{
		return true;
	}
	else
	{
		return false;
	}
}
