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
#include <algorithm>

/* Inicio das funções */

bool compare_by_lancamento(MIDIA i, MIDIA j)
{
    if (i.getLancamento() > j.getLancamento())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool compare_by_titulo(MIDIA i, MIDIA j)
{
    if (i.getTitulo() > j.getTitulo())
    {
        return true;
    }
    else
    {
        return false;
    }
}

deque<MIDIA> addDq(deque<CD> cd, deque<DVD> dvd)
{
    deque<MIDIA> dq;
    std::deque<DVD>::iterator w;
    for (w = dvd.begin(); w != dvd.end(); w++)
    {
        dq.push_back(*w);
    }

    std::deque<CD>::iterator j;
    for (j = cd.begin(); j != cd.end(); j++)
    {
        dq.push_back(*j);
    }
    return dq;
}

/* Função A */
/* Dado o nome de um artista, exibir todos os CD's de sua autoria ordenados pela data de lançamento */
void showAllCds(string artista, deque<CD> &colecao)
{
    std::deque<CD>::iterator w;
    sort(colecao.begin(), colecao.end(), compare_by_lancamento);
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

void showAllDvds(string artista, deque<DVD> &colecao)
{
    std::deque<DVD>::iterator w;
    sort(colecao.begin(), colecao.end(), compare_by_lancamento);
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getArtista() == artista))
        {
            cout << "DVD's - " << w->getTitulo() << endl;
        }
    }
};

/* Função C */
/* Dado o nome do artista, exibir todas as midias de sua autoria, ordenados pela data de lançamento */
void showAllMidia(string artista, deque<CD> &colecaoCD, deque<DVD> &colecaoDVD)
{

    deque<MIDIA> colecao;
    // merge(colecaoDVD.begin(), colecaoDVD.end(), colecaoCD.begin(), colecaoCD.end(), colecao.begin());
    colecao = addDq(colecaoCD, colecaoDVD);

    std::deque<MIDIA>::iterator w;
    sort(colecao.begin(), colecao.end(), compare_by_lancamento);

    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getArtista() == artista))
        {
            cout << "Midia - " << w->getTitulo() << endl;
        }
    }
};

/*  Função D */
/* Dado um ano, exibir todas as midias lanaçadas naquele ano, independente do artista, ordenados alfabetiacmente */
void showAllInYear(int lancamento, deque<CD> &colecaoCD, deque<DVD> &colecaoDVD)
{

    deque<MIDIA> colecao;
    // merge(colecaoDVD.begin(), colecaoDVD.end(), colecaoCD.begin(), colecaoCD.end(), colecao.begin());
    colecao = addDq(colecaoCD, colecaoDVD);

    std::deque<MIDIA>::iterator w;
    sort(colecao.begin(), colecao.end(), compare_by_titulo);

    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getLancamento() == lancamento))
        {
            cout << "Midia - " << w->getTitulo() << endl;
        }
    }
};

/* Função E */
/* Dados um titulo de CD e um título de DVD de um mesmo artista, exibir quais faixas ambos possuem em comum e quais faixas só existem no CD e no DVD; */
// void showEquals(string tituloCD, string tituloDVD, deque<CD> &colecaoCD, deque<DVD> &colecaoDVD)
// {
//     DVD tempDvd = colecaoDVD[0];
//     std::deque<DVD>::iterator w;
//     for (w = colecaoDVD.begin(); w != colecaoDVD.end(); w++)
//     {
//         if ((w->getTitulo() == tituloDVD))
//         {
//             tempDvd = *w;
//         }
//     }

//     CD tempCd = colecaoCD[0];
//     std::deque<CD>::iterator j;
//     for (j = colecaoCD.begin(); j != colecaoCD.end(); j++)
//     {
//         if ((j->getTitulo() == tituloCD))
//         {
//             tempCd = *j;
//         }
//     }
//     // CD e DVD do artista

//     std::deque<string> both, onlyCd, onlyDvd;

//     cout << "aqui" << endl;

//     std::deque<string> c;
//     c = w->getFaixa();

//     std::deque<string> d;
//     d = j->getFaixa();

//     cout << "passou" << endl;
//     std::deque<string>::iterator AUXCD;
//     std::deque<string>::iterator AUXDVD;

//     for (AUXCD = c.begin(); AUXCD != c.end(); AUXCD++)
//     {
//         for (AUXDVD = d.begin(); AUXDVD != d.end(); AUXDVD++)
//         {
//             if (AUXCD == AUXDVD)
//             {
//                 both.push_back(*AUXDVD);
//             }
//         }
//     }

//     std::deque<string>::iterator auxPrint;
//     for (auxPrint = both.begin(); auxPrint != both.end(); auxPrint++)
//     {
//         cout << *auxPrint << endl;
//     }
// }

/*Função F*/

// deque<MIDIA> colecao;
// // merge(colecaoDVD.begin(), colecaoDVD.end(), colecaoCD.begin(), colecaoCD.end(), colecao.begin());
// colecao = addDq(colecaoCD, colecaoDVD);

void showAllByGen(string gen, deque<CD> &colecaoCD, deque<DVD> &colecaoDVD)
{
    cout << "   CD's" << endl;
    cout << "==========" << endl;

    std::deque<CD>::iterator w;
    sort(colecaoCD.begin(), colecaoCD.end(), compare_by_titulo);
    for (w = colecaoCD.begin(); w != colecaoCD.end(); w++)
    {
        if ((w->getGenero() == gen))
        {
            cout << "CD's - " << w->getTitulo() << endl;
        }
    }

    cout << "==========" << endl;
    cout << "   DVD's" << endl;
    cout << "==========" << endl;

    std::deque<DVD>::iterator j;
    sort(colecaoDVD.begin(), colecaoDVD.end(), compare_by_titulo);
    for (j = colecaoDVD.begin(); j != colecaoDVD.end(); j++)
    {
        if ((j->getGenero() == gen))
        {
            cout << "DVD's - " << j->getTitulo() << endl;
        }
    }
}

/* Função G */
/* Mostra todas as key words sem */
void showAllKw(deque<CD> &colecaoCD, deque<DVD> &colecaoDVD)
{
    std::deque<string> auxtemp;
    deque<MIDIA> colecao;
    // merge(colecaoDVD.begin(), colecaoDVD.end(), colecaoCD.begin(), colecaoCD.end(), colecao.begin());
    colecao = addDq(colecaoCD, colecaoDVD);

    cout << "Palavras Chave\n"
         << endl;
    std::deque<MIDIA>::iterator w;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        std::deque<string>::iterator temp;
        deque<string> kw = w->getKeywords();

        for (temp = kw.begin(); temp != kw.end(); temp++)
        {
            if (std::find(auxtemp.begin(), auxtemp.end(), *temp) == auxtemp.end())
            {
                cout << *temp << endl;
                auxtemp.push_back(*temp);
            }
        }
    }
}
#endif