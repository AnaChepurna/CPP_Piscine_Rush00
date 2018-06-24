#ifndef ENEMY_HPP
# define ENEMY_HPP


#include "Object.h"

class Enemy: public Object {
private:
    static char const _map[5][3] = {{'.', '@', '.'},
									{'/', '|', '\\'},
									{'_', '@', '_'},
									{'\\', '|', '/'},
									{'.', '@', '.'}};
    static const int _heigth = 5;
    static const int _weight = 3;
    static const int enemy_hp = 1;
    static const std :: string enemy_t = "enemy";
    Enemy();
public:
    Enemy(int x, int y);
    Enemy(Enemy const &src);
    Enemy &operator=(Enemy &src);

    ~Enemy();
};

#endif