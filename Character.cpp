//
// Created by Anastasia CHEPURNA on 6/24/18.
//

#include "Character.h"

Character::Character(): Object() {
}

Character::Character(int x, int y): Object() {
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
}

Character::Character(Character const &src) {

}

Character &Character::operator=(Character &src) {
    return <#initializer#>;
}
