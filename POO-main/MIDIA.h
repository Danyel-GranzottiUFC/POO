#ifndef MIDIA_H
#define MIDIA_H

/* Headers */
#include "CD.h"
#include "DVD.h"

/* Bibliotecas */
#include <iostream>
#include <string>
#include <deque>
#include <iterator>

using namespace std;

class MIDIA : public CD, public DVD
{
private:
   string artista;
   string titulo;
   deque<string> faixas;
   int lancamento;
   string genero;
   deque<string> keywords;

public:
   MIDIA(string, string, deque<string>, int, string, deque<string>);
   ~MIDIA();

   /* Gatters e Setters */
   string getArtista();
   void setArtista(string);

   string getTitulo();
   void setTitulo(string);

   deque<string> getFaixa();
   void setFaixa(deque<string>);

   int getLancamento();
   void setLancamento(int);

   string getGenero();
   void setGenero(string);

   deque<string> getKeywords();
   void setKeywords(deque<string>);

   bool getFormato();
};

// Construtor padrão
MIDIA::MIDIA(string nomeArtista, string nomeTitulo, deque<string> fx, int lanc, string gen, deque<string> kw)
{
   CD::CD(int dr, float vl, bool clt)
   {
      duracao = dr;
      volume = vl;
      coletanea = clt;
   }
   artista = nomeArtista;
   titulo = nomeTitulo;
   faixas = fx;
   lancamento = lanc;
   genero = gen;
   keywords = kw;
}
MIDIA::~MIDIA()
{
}

/* Encapsulamento */
string MIDIA::getArtista()
{
   return (this->artista);
};
void MIDIA::setArtista(string name)
{
   this->artista = name;
};

string MIDIA::getTitulo()
{
   return (this->titulo);
};
void MIDIA::setTitulo(string name)
{
   this->titulo = name;
};

deque<string> MIDIA::getFaixa()
{
   return (this->faixas);
};
void MIDIA::setFaixa(deque<string> name)
{
   this->faixas = name;
};

int MIDIA::getLancamento()
{
   return (this->lancamento);
};
void MIDIA::setLancamento(int n)
{
   this->lancamento = n;
};

string MIDIA::getGenero()
{
   return (this->genero);
};
void MIDIA::setGenero(string name)
{
   this->genero = name;
};

deque<string> MIDIA::getKeywords()
{
   return (this->keywords);
};
void MIDIA::setKeywords(deque<string> kw)
{
   this->keywords = kw;
};

#endif