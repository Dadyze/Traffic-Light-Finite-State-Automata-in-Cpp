#pragma once
#include "StanjaSemafora.cpp"
#include <chrono>
#include <thread>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace chrono_literals;

#define Cekaj(x) this_thread::sleep_for(x)
#define LOG(x) cout<< x << endl;


//   -Sporedna Cesta-
// _____| |____
// _____   ____   -Glavna Cesta- 
//      | |

class SemaforDKA {
private:
    StanjaSemafora trenutnoStanje;
    bool SenzorAuta;
    int longTimer;
    int shortTimer;

public:
    SemaforDKA(int longTimer, int shortTimer);
    void loop();
    void SenzorInfo(bool detected);
};
