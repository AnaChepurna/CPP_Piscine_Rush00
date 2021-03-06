//
// Created by Anastasia CHEPURNA on 6/24/18.
//

#ifndef RUSH00_OBJECT_H
#define RUSH00_OBJECT_H

#include <string>

class Object {
protected:
    char **map;
    int width;
    int height;
    int x;
    int y;
    std::string type;
    int         hp;
public:
    Object();
    Object(int x, int y);
    Object(Object const & obj);
    Object &operator=(Object const & obj);

    virtual ~Object();
    int     getWidth();
    int     getHeight();
    int     getX();
    int     getY();
    virtual void    move_v(int pos);
    virtual void    move_h(int pos);
    std::string const getType();
    int    getHP();
    void    setHP(int const &hp);
    char ** getMap();
    void    takeDamage(Object &src);
};

class OList {
public:
    Object * obj;
    OList * next;

    OList();
    OList(Object *obj);
    OList(OList const& src);
    OList &operator=(OList const& src);
    ~OList();
};

void deleteLists(OList *first);

#endif //RUSH00_OBJECT_H
