//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include <zconf.h>
#include "Controller.h"
#include "Model.h"
#include "Viewer.h"

Controller::Controller() {
    viewer = new Viewer(this);
    model = new Model(this, viewer);
    viewer->setModel(model);
    srand(time(0));
    userEvent = 0;
    gameOver = 0;
}

Controller::Controller(Controller const &src) {
    *this = src;
}

Controller &Controller::operator=(Controller const &src) {
    this->viewer = src.viewer;
    this->model = src.model;
    return (*this);
}

Controller::~Controller() {
    delete model;
    delete viewer;
}

void Controller::startGame() {
    viewer->showPreviw();
}

void Controller::gameLoop() {
    while (42){
        if (gameOver)
            break;
        viewer->showObjects();
        if (userEvent == '\n' || userEvent == 27)
            break;
        controlCharacter();
        controlEnemies();
        if (rand() % 7 / 6)
            model->pushObject(model->getEnemyEvent()->getEnemy());
        handleClash();
        clearDeadBodes();
        usleep(40000);
    }
    if (gameOver)
        viewer->showGameOver();
}

void Controller::setUserEvent(int e) {
    userEvent = e;
}

void Controller::controlCharacter() {
    Character * character = model->getCharacter();
    switch (userEvent)
    {
        case KEY_RIGHT:
            if (character->getX() < viewer->getWinWidth() - character->getWidth() - 1)
                character->move_h(2);
            break;
        case KEY_LEFT:
            if (character->getX() > 2)
                character->move_h(-2);
            break;
        case KEY_UP:
            if (character->getY() > 1)
                character->move_v(-1);
            break;
        case KEY_DOWN:
            if (character->getY() < viewer->getWinHeight() - character->getHeight() - 1)
                character->move_v(1);
            break;
    }
}

void Controller::controlEnemies() {
    Object *ptr;
    while ((ptr = model->getNext()) != NULL)
    {
        if (ptr->getType() == "enemy") {
            ptr->move_v(1);
            if (ptr->getY() > viewer->getWinHeight())
                model->deleteObject(ptr);
        }
    }
}

void Controller::handleClash() {
    Object *character;
    Object *ptr;
    character = model->getNext();
    while ((ptr = model->getNext()) != NULL)
    {
        if ((character->getY() <= ptr->getY() + ptr->getHeight() && character->getX() <= ptr->getX() + ptr->getWidth())\
        && (character->getY() + character->getHeight() >= ptr->getY() && character->getX() + character->getWidth() >= ptr->getX()))
            character->takeDamage(*ptr);
    }
}

void Controller::clearDeadBodes() {
    if (model->getCharacter()->getHP() <= 0) {
        endGame();
        return;
    }
    Object *ptr;
    while ((ptr = model->getNext()) != NULL)
        if (ptr->getHP() <= 0)
            model->deleteObject(ptr);
}

void Controller::endGame() {
    gameOver = 1;
}
