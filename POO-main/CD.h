#ifndef CD_H
#define CD_H

/* Headers */
//#include "MIDIA.h"
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

CD::CD(int dr, float vl, bool clt, string artista, string titulo, deque<string> faixas, int lancamento, string genero, deque<string> keywords) : MIDIA(artista, titulo, faixas, lancamento, genero, keywords)
{
   duracao = dr;
   volume = vl;
   coletanea = clt;
}

CD::~CD() {}

int CD::getDuracao()
{
   return (this->duracao);
};
void CD::setDuracao(int n)
{
   this->duracao = n;
};

float CD::getVolume()
{
   return (this->volume);
};
void CD::setVolume(float n)
{
   this->volume = volume;
};

bool CD::getColetanea()
{
   return (this->coletanea);
};
void CD::setColetanea(bool n)
{
   this->coletanea = n;
};

#endif