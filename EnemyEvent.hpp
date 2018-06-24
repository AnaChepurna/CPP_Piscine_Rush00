#ifndef ENEMYEVENT_HPP
# define ENEMYEVENT_HPP

# include "Enemy.hpp"

class EnemyEvent
{
public:
	EnemyEvent();
	EnemyEvent(int width);
	EnemyEvent(EnemyEvent const &src);
	EnemyEvent &operator=(EnemyEvent const &src);

	~EnemyEvent();
	Enemy*	getEnemy();
private:
	int width;
};

#endif