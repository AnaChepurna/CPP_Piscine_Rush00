#ifndef BOSS_HPP
# define BOSS_HPP

#include "Object.h"
#include "Bullet.hpp"

class Boss: public Object {
private:
    static char const _map[6][7];
    static const int _heigth = 6;
    static const int _width = 7;
    static const int boss_hp = 5;
    static const std :: string boss_t;
    int bul;
    Boss();
public:
    Boss(int x, int y);
    Boss(Boss const &src);
    Boss &operator=(Boss const &src);

    ~Boss();
    Bullet* attack();
    void    resetBul();    
};

#endif