#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <deque>
#include <iterator>
#include "./MIDIA.h"



class DRIVER{
    private:
    std::deque<MIDIA*>;
}

// Dado o nome do artista, exibir o nome de todos os CDs de sua autoria, ordenados pela data de lançamento;
void printCDs(string name)
{
    for (w = minhaFila.begin(); w != minhaFila.end(); w++)
        cout << "A fila está assim...: " << *w << endl;
}
//Vou pensar um pouco aqui como fazemos

/* Dado um ano, exibir todas as mídias lançadas naquele ano, idependente do artista, ordenados alfabeticamentes (Não haverá distinção entre CD e DVD)*/
void printAllMedia(int year){
    // vou da uma pesquisada aqui tbm
    // (y)
};
#endif