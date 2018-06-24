#include "Boss.hpp"

Boss :: Boss ()
{
	return ;
}

Boss :: Boss( int x, int y) : Object(x, y)
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
    type = boss_t;
    hp = boss_hp;
}

Boss :: Boss(Boss const &src)
{
	*this = src;
}

Boss :: ~Boss()
{
    for (int i = 0; i < height; i++)
        delete [] map[i];
    delete [] map;
}

Boss &Boss::operator=(Boss &src) {
    this->map = src.map;
    this->height = src.height;
    this->width = src.height;
    this->x = src.x;
    this->y = src.y;
    return (*this);
}
