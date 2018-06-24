//
// Created by Anastasia CHEPURNA on 6/24/18.
//

#ifndef RUSH00_CHARACTER_H
#define RUSH00_CHARACTER_H


#include "Object.h"

class Character: public Object {
private:
    static char const _map[4][6];
    static const int _heigth = 4;
    static const int _width = 6;
    static const int hero_hp = 3;
    static const std :: string hero_t;
    static const int _color = 1;
    Character();
public:
    Character(int x, int y);
    Character(Character const &src);
    Character &operator=(Character const &src);
    ~Character();
};


#endif //RUSH00_CHARACTER_H
