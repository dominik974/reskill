#include "rectangle.h"

Rectangle::Rectangle() {
    width_ = 0;
    height_ = 0;
}

Rectangle::Rectangle(double w, double h) {
    width_ = w;
    height_ = h;
}

void Rectangle::setDimensions(double w, double h) {
    width_ = w;
    height_ = h;
}

double Rectangle::calculateArea() const {
    return width_ * height_;
}