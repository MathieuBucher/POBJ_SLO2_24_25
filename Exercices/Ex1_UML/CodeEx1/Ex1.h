#ifndef Ex1_h
#define Ex1_h

class FormesGeometriques;

class Ex1 {

 public:

    int main();

    int ChoisirForme();

    SaisirParametres(int CodeForme);

    AfficherResultats(int CodeForme);

    ExecuterLesCalculs(int CodeForme);

 public:
    int CodeFormeChoisie;
    int newAttr;

 public:

    /**
     * @element-type FormesGeometriques
     */
    FormesGeometriques *myFormesGeometriques;
};

#endif // Ex1_h
