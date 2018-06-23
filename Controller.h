//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_CONTROLLER_H
#define RUSH00_CONTROLLER_H


#include "Model.h"
#include "Viewer.h"

class Controller {
private:
    Model * model;
    Viewer *viewer;

public:
    Controller();
    Controller(Controller const& src);
    Controller &operator=(Controller const &src);
    ~Controller();
};


#endif //RUSH00_CONTROLLER_H
