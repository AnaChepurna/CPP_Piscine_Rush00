//
// Created by Anastasia CHEPURNA on 6/24/18.
//

#include "Character.h"

Character::Character(): Object() {
}

Character::Character(int x, int y): Object(x, y) {
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
    type = hero_t;
    hp = hero_hp;
}

Character::Character(Character const &src) {
    *this = src;
}

Character &Character::operator=(Character &src) {
    this->map = src.map;
    this->height = src.height;
    this->width = src.height;
    this->x = src.x;
    this->y = src.y;
    return (*this);
}

Character::~Character() {
    for (int i = 0; i < height; i++)
        delete [] map[i];
    delete [] map;
}
