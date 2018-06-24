#ifndef BULLET_HPP
# define BULLET_HPP

#include "Object.h"

class Bullet: public Object {
private:
    static char const _map[1][1] = {{'-'}};
    static const int _heigth = 1;
    static const int _weight = 1;
    static const int bul_hp = 1;
    static std :: string bul_t = "bullet";

    Bullet();
public:
    Bullet(int x, int y);
    Bullet(Bullet const &src);
    Bullet &operator=(Bullet &src);

    ~Bullet();
};

#endif