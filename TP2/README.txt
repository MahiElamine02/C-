EXPLICATION DU CODE C++ - CLASSE RECTANGLE

STRUCTURE DU PROJET
===================

Le projet est organisé en trois fichiers principaux :

1. rectangle.h     - Fichier d'en-tête (header) contenant la déclaration de la classe Rectangle
2. rectangle.cpp   - Fichier d'implémentation contenant le code des méthodes de la classe
3. main.cpp        - Fichier principal contenant la fonction main() qui teste la classe

DESCRIPTION DE LA CLASSE RECTANGLE
==================================

La classe Rectangle représente un rectangle avec les caractéristiques suivantes :

ATTRIBUTS PRIVÉS :
- double width  : largeur du rectangle
- double height : hauteur du rectangle

MÉTHODES PUBLIQUES :

CONSTRUCTEUR :
- Rectangle(double w, double h) : crée un rectangle avec largeur w et hauteur h
  (utilise les setters pour valider les valeurs)

ACCESSEURS (getters) :
- double getWidth() const  : retourne la largeur
- double getHeight() const : retourne la hauteur

MUTATEURS (setters) AVEC SÉCURITÉ :
- void setWidth(double w)  : modifie la largeur (lève une exception si négatif)
- void setHeight(double h) : modifie la hauteur (lève une exception si négatif)

FONCTIONS DE CALCUL :
- double area() const      : calcule et retourne l'aire (width * height)
- double perimeter() const : calcule et retourne le périmètre (2 * (width + height))

GESTION D'ERREURS
=================

La classe utilise des exceptions pour gérer les erreurs :
- Si on essaie de définir une largeur ou hauteur négative, une exception
  std::invalid_argument est levée avec un message d'erreur approprié.
- Le programme principal capture ces exceptions avec un try-catch.

FONCTIONNEMENT DU PROGRAMME PRINCIPAL
====================================

Le fichier main.cpp :
1. Crée deux rectangles avec des dimensions différentes
2. Affiche leurs propriétés (aire et périmètre)
3. Modifie les dimensions du premier rectangle
4. Affiche les nouvelles propriétés
5. Teste la protection contre les valeurs négatives (doit lever une exception)

COMMENT COMPILER ET LANCER LE PROGRAMME
========================================

PRÉREQUIS :
- Avoir un compilateur C++ installé (g++ sur Windows/Linux/Mac)
- Être dans le répertoire du projet

COMMANDES DE COMPILATION :
Sur Windows :
g++ main.cpp rectangle.cpp -o main

Sur Linux/Mac :
g++ main.cpp rectangle.cpp -o main

COMMANDES D'EXÉCUTION :
Sur Windows :
.\main

Sur Linux/Mac :
./main

SORTIE ATTENDUE :
=================

Rectangle 1:
  Area: 15
  Perimeter: 16

Rectangle 2:
  Area: 31.5
  Perimeter: 23.4

Modifying rectangle 1...
New area: 48
New perimeter: 28

Testing negative value protection...
Error: Width cannot be negative

ARCHITECTURE ET BONNES PRATIQUES
=================================

- Séparation en fichiers header (.h) et implémentation (.cpp)
- Utilisation de const pour les méthodes qui ne modifient pas l'objet
- Validation des données d'entrée dans les setters
- Gestion d'erreurs par exceptions
- Encapsulation (attributs privés, méthodes publiques)

POINTS À NOTER :
- Le constructeur utilise les setters pour bénéficier de la validation
- Les calculs d'aire et périmètre sont des méthodes const
- Le programme utilise la bibliothèque standard C++ (<iostream>, <stdexcept>)