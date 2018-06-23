//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_CONTROLLER_H
#define RUSH00_CONTROLLER_H


class Model;
class Viewer;

class Controller {
private:
    Model * model;
    Viewer *viewer;

public:
    Controller();
    Controller(Controller const& src);
    Controller &operator=(Controller const &src);
    ~Controller();
    void startGame();
};


#endif //RUSH00_CONTROLLER_H
