//
// Created by Anastasia CHEPURNA on 6/24/18.
//

#ifndef RUSH00_OBJECT_H
#define RUSH00_OBJECT_H

class Object {
protected:
    char **map;
    int width;
    int height;
    int x;
    int y;
};

class OList {
private:
    destroy();
public:
    Object * obj;
    OList * next;

    OList();
    OList(OList const& src);
    OList &operator=(OList const& src);

    ~OList();
};
#endif //RUSH00_OBJECT_H
