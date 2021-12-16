#include "CompteEpargne.h"

using namespace Banque;


int main() {

    Client* cl1 = new Client("ibra", "omar", "sale");
    Client* cl2 = new Client("ibra", "Ahmed", "rabat");
    Devise* s1 = new Devise(20000);
    //s1->afficher();
    CompteEpargne cpt1(cl1, s1, 2);
    // cpt1.consulter();
    Devise* s2 = new Devise(15000);
    CompteEpargne cpt2(cl2, s2, 2);
    CompteEpargne cpt3(cl2, s2, 2);
    Devise* s3 = new Devise(1500);
    Devise* s4 = new Devise(1500);
    cpt1.crediter(*s3);
    cpt2.debiter(*s4);
    cpt1.verser(*s3, cpt2);

    cpt2.verser(*s3, cpt1);

    cpt1.afficherOp();

    cpt1.consulter();
    cpt2.consulter();

    cl2->afficher_compte();

    delete s1;
    delete s2;
    delete s3;


}
