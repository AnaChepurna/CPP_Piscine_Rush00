#include "EnemyEvent.hpp"

EnemyEvent :: EnemyEvent()
{
	return ;
}

EnemyEvent :: EnemyEvent(int width) : width(width)
{
	return ;
}

EnemyEvent :: EnemyEvent(EnemyEvent const &src)
{
	*this = src;
}

EnemyEvent &EnemyEvent :: operator=(EnemyEvent const &src)
{
	(void)src;
	return (*this);
}

EnemyEvent :: ~EnemyEvent()
{
	return ;
}

Enemy* EnemyEvent :: getEnemy()
{
	Enemy *res = new Enemy(rand() % this->width + 1, 1);
	if(res->getX() + res->getWidth() > this->width)
		res->move_h((res->getWidth() + 1) * -1);
	return (res);
}