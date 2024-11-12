#ifndef Rectangle_h
#define Rectangle_h

#include "FormesGeometriques.h"


class Rectangle : public FormesGeometriques {

 public:

    CalculerSurface(double largeur, double hauteur);

    CalculerPerimetre(double largeur, double hauteur);
};

#endif // Rectangle_h
