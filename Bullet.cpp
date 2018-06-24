#include "Bullet.hpp"

char const Bullet :: _map[1][2] = {{'-', '\0'}};
std :: string Bullet :: bul_t = "bullet";

Bullet::Bullet(): Object() {
}

Bullet::Bullet(int x, int y): Object(x, y) {
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
    type = bul_t;
    hp = bul_hp;
}

Bullet::Bullet(Bullet const &src) {
    *this = src;
}

Bullet &Bullet::operator=(Bullet const &src) {
    this->map = src.map;
    this->height = src.height;
    this->width = src.height;
    this->x = src.x;
    this->y = src.y;
    return (*this);
}

Bullet::~Bullet() {
    for (int i = 0; i < height; i++)
        delete [] map[i];
    delete [] map;
}