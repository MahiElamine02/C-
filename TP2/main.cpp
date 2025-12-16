#include <iostream>
#include "rectangle.h"

int main() {
    try {
        // Création de rectangles
        Rectangle rect1(5.0, 3.0);
        Rectangle rect2(7.5, 4.2);

        // Affichage des propriétés initiales
        std::cout << "Rectangle 1:" << std::endl;
        std::cout << "  Area: " << rect1.area() << std::endl;
        std::cout << "  Perimeter: " << rect1.perimeter() << std::endl;

        std::cout << "\nRectangle 2:" << std::endl;
        std::cout << "  Area: " << rect2.area() << std::endl;
        std::cout << "  Perimeter: " << rect2.perimeter() << std::endl;

        // Modification des dimensions
        std::cout << "\nModifying rectangle 1..." << std::endl;
        rect1.setWidth(8.0);
        rect1.setHeight(6.0);
        std::cout << "New area: " << rect1.area() << std::endl;
        std::cout << "New perimeter: " << rect1.perimeter() << std::endl;

        // Test de la sécurité contre les valeurs négatives
        std::cout << "\nTesting negative value protection..." << std::endl;
        rect2.setWidth(-5.0);  // Ceci lèvera une exception

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}