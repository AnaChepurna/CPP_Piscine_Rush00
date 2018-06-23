//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include <iostream>
#include "Viewer.h"

Viewer::Viewer(): controller(NULL), model(NULL), wnd(initscr()) {
    getmaxyx(wnd, win_y, win_x);
//    noecho();
//    keypad(wnd, true);
//    nodelay(wnd, true);
//    clear();
//    refresh();
}

Viewer::Viewer(Controller *controller): controller(controller), model(NULL), wnd(initscr()) {
    getmaxyx(wnd, win_y, win_x);
//    //noecho();
//    keypad(wnd, true);
//    nodelay(wnd, true);
//    clear();
//    refresh();
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
    wprintw(wnd, "Welcome to the game!");
    getch();
}


