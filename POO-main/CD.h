#ifndef CD_H
#define CD_H

/* Headers */
#include "MIDIA.h"
//#include "DVD.h"

/* Bibliotecas */
#include <iostream>
#include <string>
#include <deque>
#include <iterator>

using namespace std;

class CD : public MIDIA
{
private:
   int duracao;
   float volume;
   bool coletanea;

public:
   CD(int, float, bool, string, string, deque<string>, int, string, deque<string>);
   ~CD();

   int getDuracao();
   void setDuracao(int);

   float getVolume();
   void setVolume(float);

   bool getColetanea();
   void setColetanea(bool);
};

#endif