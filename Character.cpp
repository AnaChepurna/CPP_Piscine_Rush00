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
        for (int j = 0; i < _weight)
    }

}

Character::Character(Character const &src) {

}

Character &Character::operator=(Character &src) {
    return <#initializer#>;
}
