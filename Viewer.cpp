//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include <iostream>
#include "Viewer.h"

Viewer::Viewer(): controller(NULL), model(NULL) {
}

Viewer::Viewer(Controller *controller): controller(controller), model(NULL) {
}
