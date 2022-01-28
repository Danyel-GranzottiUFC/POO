#ifndef CD_H
#define CD_H
using namespace std;
#include <deque>

class CD{
private:
  
   int duracao;
   float volume;
   bool coletanea;
   
public:
  
   int getDuracao();
   void setDuracao(int);

   float getVolume();
   void setVolume(float);

   bool getColetanea();
   void setColetanea(bool);   
};

int CD::getDuracao(){
   return (this->duracao);
}
void CD::setDuracao(int n){
   this->duracao=n;
}

float CD::getVolume(){
   return (this->volume);
}
void CD::setVolume(float n){
   this->volume=volume;
}

bool CD::getColetanea(){
   return (this->coletanea);
}
void CD::setColetanea(bool n){
   this->coletanea=n;
}

#endif
