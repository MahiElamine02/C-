#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    // Constructeur
    Rectangle(double w, double h);

    // Accesseurs
    double getWidth() const;
    double getHeight() const;

    // Mutateurs avec sécurité
    void setWidth(double w);
    void setHeight(double h);

    // Fonctions de calcul
    double area() const;
    double perimeter() const;
};

#endif // RECTANGLE_H