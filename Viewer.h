//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_VIEWER_H
#define RUSH00_VIEWER_H


#include "Controller.h"

class Viewer {
private:
    Controller * controller;
    Model * model;
    Viewer();

public:
    Viewer(Controller * controller);
    Viewer(Viewer const& src);
    Viewer &operator=(Viewer const &src);
    ~Viewer();
    void setModel(Model *v);
};


#endif //RUSH00_VIEWER_H
