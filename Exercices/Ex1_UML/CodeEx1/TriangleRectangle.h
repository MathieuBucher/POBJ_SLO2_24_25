#ifndef TriangleRectangle_h
#define TriangleRectangle_h

#include "FormesGeometriques.h"


class TriangleRectangle : public FormesGeometriques {

 public:

    CalculerSurface(double base, double hauteur);

    CalculerPerimetre(double base, double hauteur);
};

#endif // TriangleRectangle_h
