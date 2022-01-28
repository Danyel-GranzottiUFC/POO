#ifndef MIDIA_H
#define MIDIA_H

#include <iostream>
#include <deque>
#include <string>
//#include "./CD.h"
//#include "./DVD.h"

class MIDIA
{
private:
   string artista;
   string titulo;
   deque<string *> faixas;
   int lancamento;
   string genero;
   deque<string *> keywords;

public:
   // deque<string *> faixas, int lancamento,string genero, deque<string *> keywords
   MIDIA(string, string);
   ~MIDIA();

   string getArtista();
   void setArtista(string);

   string getTitulo();
   void setTitulo(string);

   deque<string *> getFaixa();
   void setFaixa(deque<string *>);

   int getLancamento();
   void setLancamento(int);

   string getGenero();
   void setGenero(string);

   deque<string *> getKeywords();
   void setKeywords(deque<string *>);

   void printCDs(string name);
   void printAllMedia(int year);
};

MIDIA(string nomeArstita, string tituloMidia){
   artista = nomeArstita;
   titulo = titu;
}

string MIDIA::getArtista()
{
   return (this->artista);
}
void MIDIA::setArtista(string name)
{
   this->artista = name;
}

string MIDIA::getTitulo()
{
   return (this->titulo);
}
void MIDIA::setTitulo(string name)
{
   this->titulo = name;
}

deque<string *> MIDIA::getFaixa(){
   return (this->faixas);
}
void MIDIA::setFaixa(deque<string *> name){
   this->faixas = name;
}

int MIDIA::getLancamento()
{
   return (this->lancamento);
}
void MIDIA::setLancamento(int n)
{
   this->lancamento = n;
}

string MIDIA::getGenero()
{
   return (this->genero);
}
void MIDIA::setGenero(string name)
{
   this->genero=name;
}

deque<string *> MIDIA::getKeywords(){
   return (this->keywords);
}
void MIDIA::setKeywords(deque<string *>kw){
   this->keywords = kw;
}

#endif