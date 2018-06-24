//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include <iostream>
#include "Viewer.h"
#include "Object.h"
#include "Model.h"

Viewer::Viewer(): controller(NULL), model(NULL), wnd(initscr()) {
    getmaxyx(wnd, win_y, win_x);
    raw();
    noecho();
    keypad(wnd, true);
    curs_set(0);
    clear();
    nodelay(wnd, true);
    box(wnd, 0,0);
}

Viewer::Viewer(Controller *controller): controller(controller), model(NULL), wnd(initscr()) {
    getmaxyx(wnd, win_y, win_x);
    raw();
    noecho();
    keypad(wnd, true);
    curs_set(0);
    clear();
    nodelay(wnd, true);
    box(wnd, 0,0);
    start_color();

    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
  //  printf("viewer\n");
}

Viewer::Viewer(Viewer const &src) {
*this = src;
}

Viewer &Viewer::operator=(Viewer const &src) {
    this->model = src.model;
    this->controller = src.controller;
    this->wnd = src.wnd;
    this->win_y = src.win_y;
    this->win_x = src.win_x;
    return (*this);
}

Viewer::~Viewer() {
    endwin();
}

void Viewer::setModel(Model *v) {
    this->model = v;
}

void Viewer::showPreviw() {
    mvwprintw(wnd, win_x / 2, win_y / 2, "Welcome to the game!");
    refresh();
    int c;
    while (c != '\n' && c != 27)
        c = wgetch(wnd);
}

int Viewer::getWinHeight() {
    return (win_y);
}

int Viewer::getWinWidth() {
    return (win_x);
}

void Viewer::getObjectColor(Object * object)
{
    if (object->getType() == "hero")
        attron(COLOR_PAIR(1));
    else
        attron(COLOR_PAIR(2));

}

void Viewer::showObjects() {
    Object *obj;
    int height;
    clear();
    while ((obj = model->getNext()) != NULL)
    {
        height = obj->getHeight();
        getObjectColor(obj);
        char **map = obj->getMap();
        for (int i = 0; i < height; i++) {
            mvwprintw(wnd, obj->getY() + i, obj->getX(), map[i]);
        }
    }
    box(wnd, 0,0);
    refresh();
    controller->setUserEvent(wgetch(wnd));
}


