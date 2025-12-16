#include "rectangle.h"
#include <stdexcept>

// Constructeur
Rectangle::Rectangle(double w, double h) {
    setWidth(w);  // utilisation des mutateurs pour la validation
    setHeight(h);
}

// Accesseurs
double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

// Mutateurs avec sécurité
void Rectangle::setWidth(double w) {
    if (w < 0.0) {
        throw std::invalid_argument("Width cannot be negative");
    }
    width = w;
}

void Rectangle::setHeight(double h) {
    if (h < 0.0) {
        throw std::invalid_argument("Height cannot be negative");
    }
    height = h;
}

// Fonctions de calcul
double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2.0 * (width + height);
}