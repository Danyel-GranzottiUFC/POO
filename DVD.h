#ifndef DVD_H
#define DVD_H
#include <string>
#include <deque>

class DVD{
private:
     std::deque<string *> formatoAudio;
     std::deque<string *> formatoTela;
     std::deque<string *> legendas;

  public:
     std::deque<string *> getFormatoAudio();
     void setFormatoAudio(std::deque<string *>);

     std::deque<string *> getFormatoTela();
     void setFormatoTela(std::deque<string *>);

     std::deque<string *> getLegendas();
     void setColetanea(std::deque<string *>);
};

std::deque<string *> DVD::getFormatoAudio()
{
   return(this->formatoAudio);
}
void DVD::setFormatoAudio(std::deque<string *> name)
{
   this->formatoAudio = name;
}

std::deque<string *> DVD::getFormatoTela()
{
   return (this->formatoTela);
}
void DVD::setFormatoTela(std::deque<string *> name)
{
   this->formatoTela = name;
}

std::deque<string *> DVD::getLegendas()
{
   return(this->legendas);
}
void DVD::setColetanea(std::deque<string *> name)
{
   this->legendas = name;
}

#endif
