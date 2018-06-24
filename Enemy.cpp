#include "Enemy.hpp"

char const Enemy::_map[5][4] = {{'.', '@', '.', '\0'},
                                {'/', '|', '\\', '\0'},
                                {'_', '@', '_', '\0'},
                                {'\\', '|', '/', '\0'},
                                {'.', '@', '.', '\0'}};
const std :: string Enemy::enemy_t = "enemy";

Enemy :: Enemy ()
{
	return ;
}

Enemy :: Enemy( int x, int y) : Object(x, y)
{
    map = new char *[_heigth];
    for (int i = 0; i < _heigth; i++)
    {
        map[i] = new char[_width];
        for (int j = 0; j < _width; j++)
        {
            map[i][j] = _map[i][j];
        }
    }
    height = _heigth;
    width = _width;
    hp = enemy_hp;
    type = enemy_t;
}

Enemy :: Enemy(Enemy const &src)
{
	*this = src;
}

Enemy :: ~Enemy()
{
    for (int i = 0; i < height; i++)
        delete [] map[i];
    delete [] map;
}

Enemy &Enemy::operator=(Enemy const &src) {
    this->map = src.map;
    this->height = src.height;
    this->width = src.height;
    this->x = src.x;
    this->y = src.y;
    return (*this);
}
