#include "Square.h"

namespace shapes {
    Square::Square() : sideLength(0.0) {} //square specifications
    Square::Square(float side) : sideLength(side) {}

    Square::~Square() {}

    float Square::getSideLength() const {
        return sideLength;
    }

    void Square::setSideLength(float side) {
        sideLength = side;
    }
}
