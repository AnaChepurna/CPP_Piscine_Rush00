#ifndef BOSS_HPP
# define BOSS_HPP

#include "Object.h"

class Boss: public Object {
private:
    static char const _map[6][6] = {{'-', '-', '/', '\\', '-', '-'},
									{'-', '/', '#', '#', '\\', '-'},
									{'=', '=', '=', '=', '=', '='},
									{'-', '\\', '#', '#', '/', '-'},
									{'-', '-', '\\', '//', '-', '-'}};
    static const int _heigth = 6;
    static const int _weight = 6;
    static const int boss_hp = 5;
    static std string boss_t = "boss";

    Boss();
public:
    Boss(int x, int y);
    Boss(Boss const &src);
    Boss &operator=(Boss &src);

    ~Boss();
};

#endif