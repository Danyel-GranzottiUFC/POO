#include <deque>
#include <iostream>

#include "DRIVER.h"

int main()
{

    MIDIA *test = new MIDIA("testeNome", "titulo_teste", 2022, "genteste");
    cout << "nome -->" << test->getArtista() << endl;
    cout << "titulo -->" << test->getTitulo() << endl;
    cout << "lancamento -->" << test->getLancamento() << endl;
    cout << "genero -->" << test->getGenero() << endl;

    return 0;
}