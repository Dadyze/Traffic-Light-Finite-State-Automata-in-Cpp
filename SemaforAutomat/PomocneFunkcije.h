#include <iostream>
using namespace std;
void ShowRules() {
    cout << "Dobrodosli u Implementaciju Semafora kao Konacni automat" << endl;
    cout << "Autor: Adin Jahic, Broj Indexa: II-80, Predmet: Automati i Formalni Jezici" << endl;
    cout << "Datum izrade: 29.04.2024" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Pravila i Pretpostavke:" << endl;
    cout << "1.) Glavna i Sporedna cesta imaju 4 stanja: " << endl;
    cout << "   S1) GlavnaCestaZeleno (Sporedna Crveno)" << endl;
    cout << "   S2) GlavnaCestaZuto (Sporedna Crveno)" << endl;
    cout << "   S3) SporednaCestaZeleno (Glavna Crveno)" << endl;
    cout << "   S4) SporednaCestaZuto (Glavna Crveno)" << endl;
    cout << "2.) Dok se auto ne detektuje senzorom na sporednoj cesti glavna cesta ostaje u Stanju S1" << endl;
    cout << "3.) Detekcija Auta sa sporedne ceste se simulira pritiskom tipke 'c' " << endl;
    cout << "4.) Dok je pritisnuta tipka stanja se mijenjaju od S1-S2-S3-S4 " << endl;
    cout << "5.) Duzina Trajanja stanja (zelenog/crvenog i zutog svijetla) je odredjena tajmerima" << endl;
    cout << "6.) Pritiskom na tipku 'v' sklanjamo auta sa sporedne ceste i vracamo se u stanje S1" << endl;
    cout << "1.) Pritiskom na tipku 'q' Prekidamo simulaciju" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
}




