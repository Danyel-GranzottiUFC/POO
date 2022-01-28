#include <deque>
#include <iostream>

#include "DRIVER.h"

int main(){

    MIDIA *Artist = new MIDIA ("Pink Floyd", "The Dark Side Of The Moon", 1973, "Rock");
    MIDIA *Artist = new MIDIA ("Pink Floyd", "Meddle", 1971, "Rock");
    MIDIA *Artist = new MIDIA ("Pink Floyd", "Wish You Were Here", 1975, "Rock");
    MIDIA *Artist = new MIDIA ("Pink Floyd", "Obscured By Clouds", 1973, "Rock");


    
    /*
    MIDIA *test = new MIDIA("testeNome", "titulo_teste", 2022, "genteste");
    cout << "nome -->" << test->getArtista() << endl;
    cout << "titulo -->" << test->getTitulo() << endl;
    cout << "lancamento -->" << test->getLancamento() << endl;
    cout << "genero -->" << test->getGenero() << endl;
    */

    return 0;
}