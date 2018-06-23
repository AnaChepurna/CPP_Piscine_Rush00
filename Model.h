//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_MODEL_H
#define RUSH00_MODEL_H


#include "Controller.h"

class Model {
private:
    Controller * controller;
    Viewer * viewer;
public:
    Model();
    Model(Controller * controller);
    Model(Model const& src);
    Model &operator=(Model const &src);
    ~Model();
    void setViewer(Viewer *v);
};


#endif //RUSH00_MODEL_H
