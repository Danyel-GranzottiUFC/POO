#include <algorithm>
#include <deque>
#include <iostream>

#include "DRIVER.h"
/*
true - CD
false - DVD
*/
int main()
{
    // lista de midias
    deque<MIDIA> colecao;

    // adicionar midia
    // (nomeArtista,titulo,anoDeLancamento,genero,deque<string>{"kw1","kw2","kw3"},true->cd||false->dvd)

    colecao.push_front(*(new MIDIA("testeNome", "titulo_teste 03", 2021, "rock", deque<string>{"p1", "p2"}, true)));
    colecao.push_front(*(new MIDIA("testeNome", "titulo_teste 04", 2021, "pop", true)));
    colecao.push_front(*(new MIDIA("testeNome", "titulo_teste dvd1", 2021, "pop", false)));
    colecao.push_front(*(new MIDIA("testeNome", "titulo_testedvd2", 1990, "rap", false)));
    colecao.push_front(*(new MIDIA("testeNome", "titulo_teste dvd3", 2022, "rap", false)));
    colecao.push_front(*(new MIDIA("testeNome", "titulo_teste dvd 4", 1990, "mpb", false)));
    colecao.push_front(*(new MIDIA("testeNome", "titulo_teste dvd5", 2022, "rock", false)));

    colecao.push_front(*(new MIDIA("Pink Floyd", "The Dark Side Of The Moon", 1973, "Rock", false)));
    colecao.push_front(*(new MIDIA("Metallica", "...And Justice For All", 1988, "Rock", true)));
    colecao.push_front(*(new MIDIA("Iron Mainden", "Piece Of Mind", 1983, "Rock", true)));
    colecao.push_front(*(new MIDIA("Nirvana", "Nevermind", 1991, "Rock", false)));

    showAllCds("testeNome", colecao);

    cout << "--------------------" << endl;
    showAllDvds("testeNome", colecao);

    cout << "--------------------" << endl;
    showAll("testeNome", colecao);

    cout << "--------------------" << endl;
    showAllInYear(2022, colecao);

    cout << "--------------------" << endl;
    showAllByGen("Rock", colecao);

    cout << "--------------------" << endl;
    showAllKw(colecao);

    return 0;
}