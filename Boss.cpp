#include "Boss.hpp"

char const Boss ::  _map[6][7] =    {{'-', '-', '/', '\\', '-', '-', '\0'},
                                    {'-', '/', '#', '#', '\\', '-', '\0'},
                                    {'=', '=', '=', '=', '=', '=', '\0'},
                                    {'-', '\\', '#', '#', '/', '-', '\0'},
                                    {'-', '-', '\\', '/', '-', '-', '\0'}};
const std :: string Boss :: boss_t = "boss";        

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
    this->bul = 6;
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

Boss &Boss::operator=(Boss const &src) {
    this->map = src.map;
    this->height = src.height;
    this->width = src.height;
    this->x = src.x;
    this->y = src.y;
    return (*this);
}

Bullet* Boss :: attack()
{
    if (!this->bul)
        return (NULL);
    this->bul--;
    return (new Bullet( this->x + this->width / 2, this->y));
}

void    Boss :: resetBul()
{
    this->bul++;
}

