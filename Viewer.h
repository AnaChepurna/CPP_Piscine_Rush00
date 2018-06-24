//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_VIEWER_H
#define RUSH00_VIEWER_H

#include <ncurses.h>
#include "Controller.h"
#include "Object.h"

class Viewer {
private:
    Controller * controller;
    Model * model;

    WINDOW*	wnd;
    int win_y;
    int win_x;

    Viewer();
    void getObjectColor(Object *object);
public:
    Viewer(Controller * controller);
    Viewer(Viewer const& src);
    Viewer &operator=(Viewer const &src);
    ~Viewer();
    void setModel(Model *v);
    void showPreviw();
    int getWinHeight();
    int getWinWidth();
    void showObjects();
    void showGameOver();
};


#endif //RUSH00_VIEWER_H
