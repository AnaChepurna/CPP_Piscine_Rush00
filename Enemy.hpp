#ifndef ENEMY_HPP
# define ENEMY_HPP


#include "Object.h"

class Enemy: public Object {
private:
    static char const _map[5][3];
    static const int _heigth = 5;
    static const int _width = 3;
    static const int enemy_hp = 1;
    static const std :: string enemy_t;
    Enemy();
public:
    Enemy(int x, int y);
    Enemy(Enemy const &src);
    Enemy &operator=(Enemy const &src);

    ~Enemy();
};

#endif