#ifndef DRIVER_H
#define DRIVER_H

/* Headers */
#include "MIDIA.h"
#include "DVD.h"
#include "CD.h"

/* Bibliotecas C++ */
#include <iostream>
#include <deque>
#include <iterator>

/* Inicio das funções */

/* Função A */
/* Dado o nome de um artista, exibir todos os CD's de sua autoria ordenados pela data de lançamento */
void showAllCds(string artista, deque<MIDIA> &colecao)
{
    std::deque<MIDIA>::iterator w;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getArtista() == artista))
        {
            cout << "CD's - " << w->getTitulo() << endl;
        }
    }
};

/* Função B */
/* Dado o nome de um artista, exibir todos os DVD's de sua autoria ordenados pela data de lançamento */
// void showAllDvds(string artista, deque<MIDIA> &colecao)
// {

//     std::deque<MIDIA>::iterator w;
//     for (w = colecao.begin(); w != colecao.end(); w++)
//     {
//         if ((w->getArtista() == artista) && (!w->getFormato()))
//         {
//             cout << "DVD's - " << w->getTitulo() << endl;
//         }
//     }
// };

/* Função C */
/* Dado o nome do artista, exibir todas as midias de sua autoria, ordenados pela data de lançamento */
// void showAll(string artista, deque<MIDIA> &colecao)
// {
//     std::deque<MIDIA>::iterator w;
//     for (w = colecao.begin(); w != colecao.end(); w++)
//     {
//         if ((w->getArtista() == artista))
//         {
//             cout << "Midia - " << w->getTitulo() << endl;
//         }
//     }
// };

/*  Função D */
/* Dado um ano, exibir todas as midias lanaçadas naquele ano, independente do artista, ordenados alfabetiacmente */
// void showAllInYear(int lancamento, deque<MIDIA> &colecao)
// {

//     std::deque<MIDIA>::iterator w;
//     for (w = colecao.begin(); w != colecao.end(); w++)
//     {
//         if ((w->getLancamento() == lancamento))
//         {
//             cout << "Midia -" << w->getTitulo() << endl;
//         }
//     }
// };

/* Função E */
/* Dado um ano, exibir todas as mídias lançadas naquele ano, independente do artista, ordenado alfabeticamente */
// void showAllByGen(string gen, deque<MIDIA> &colecao)
// {
//     std::deque<MIDIA>::iterator w;
//     cout << "   DVD's" << endl;
//     cout << "==========" << endl;
//     for (w = colecao.begin(); w != colecao.end(); w++)
//     {
//         if ((w->getGenero() == gen) && (!w->getFormato()))
//         {
//             cout << "DVD - " << w->getTitulo() << endl;
//         }
//     }
// cout << "==========" << endl;
//     cout << "   CD's" << endl;
//     cout << "==========" << endl;
//     for (w = colecao.begin(); w != colecao.end(); w++)
//     {
//         if ((w->getGenero() == gen) && (w->getFormato()))
//         {
//             cout << "CD - " << w->getTitulo() << endl;
//         }
//     }
// }

/* Função G */
/* Mostra todas as key words sem */
// void showAllKw(deque<MIDIA> &colecao)
// {
//     std::deque<MIDIA>::iterator w;
//     cout << "Palavras Chave\n" << endl;
//     for (w = colecao.begin(); w != colecao.end(); w++)
//     {
//         std::deque<string>::iterator temp;
//         deque<string> kw = w->getKeywords();

//         for (temp = kw.begin(); temp != kw.end(); temp++)
//         {
//             cout << "Palavra Chave - " << *temp << endl;
//         }
//         cout << " " << endl;
//     }
// }
#endif