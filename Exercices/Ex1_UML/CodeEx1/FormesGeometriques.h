#ifndef FormesGeometriques_h
#define FormesGeometriques_h


class FormesGeometriques {

 public:

    virtual CalculerSurface(double x1, double x2);

    virtual CalculerPerimetre(double x1, double x2);

    double GetSurface();

    double GetPerimetre();


 private:
    int Surface;
    int Perimetre;

};

#endif // FormesGeometriques_h
