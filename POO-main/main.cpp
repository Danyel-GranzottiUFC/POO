#include <algorithm>
#include <deque>
#include <iostream>

#include "DRIVER.h"

int main()
{
    // Lista de midias
    deque<MIDIA> colecao;
    // CD *teste = new CD(2, 7.1, false);

    /* Rock */
    /* Pink Floyd */
    // colecao.push_front(*(new CD("Pink Floyd", "The Dark Side Of The Moon", 1973, "Rock", deque<string>{"Rock", "Classic", "Anos 70"}, true)));
    // colecao.push_front(*(new MIDIA("Pink Floyd", "The Wall", 1979, "Rock", deque<string>{"Rock", "Classic", "Anos 70"}, false)));
    // colecao.push_front(*(new MIDIA("Pink Floyd", "Wish You Were Here", 1975, "Rock", deque<string>{"Rock", "Classic", "Anos 70"}, true)));
    // colecao.push_front(*(new MIDIA("Pink Floyd", "The Division Bell", 1994, "Rock", deque<string>{"Rock", "Classic", "Anos 90"}, false)));

    // /* Metallica */
    // colecao.push_front(*(new MIDIA("Metallica", "...And Justice For All", 1988, "Rock", deque<string>{"Metal", "Heavy", "Anos 80"}, false)));
    // colecao.push_front(*(new MIDIA("Metallica", "Kill 'Em All", 1983, "Rock", deque<string>{"Metal", "Heavy", "Anos 80"}, true)));
    // colecao.push_front(*(new MIDIA("Metallica", "Ride The Lightning", 1983, "Rock", deque<string>{"Metal", "Heavy", "Anos 80"}, false)));
    // colecao.push_front(*(new MIDIA("Metallica", "Master Of Puppets", 1986, "Rock", deque<string>{"Metal", "Heavy", "Anos 80"}, true)));

    // /* Iron Mainden */
    // colecao.push_front(*(new MIDIA("Iron Mainden", "Piece Of Mind", 1983, "Rock", deque<string>{"Heavy", "Metal", "Classic"}, true)));
    // colecao.push_front(*(new MIDIA("Iron Mainden", "The X Factor", 1995, "Rock", deque<string>{"Heavy", "Metal", "Classic"}, false)));
    // colecao.push_front(*(new MIDIA("Iron Mainden", "Death On The Road", 2005, "Rock", deque<string>{"Heavy", "Metal", "Classic", "Anos 2000"}, true)));
    // colecao.push_front(*(new MIDIA("Iron Mainden", "Senjutsu", 2021, "Rock", deque<string>{"Heavy", "Metal", "Classic", "Anos 2000"}, false)));

    // /* Nirvana */
    // colecao.push_front(*(new MIDIA("Nirvana", "Bleach", 1989, "Rock", deque<string>{"Grunge", "Alternative Rock", "Anos 80"}, false)));
    // colecao.push_front(*(new MIDIA("Nirvana", "Nevermind", 1991, "Rock", deque<string>{"Grunge", "Alternative Rock", "Anos 90"}, false)));
    // colecao.push_front(*(new MIDIA("Nirvana", "Incesticide", 1992, "Rock", deque<string>{"Grunge", "Alternative Rock", "Anos 90"}, false)));
    // colecao.push_front(*(new MIDIA("Nirvana", "In Utero", 1993, "Rock", deque<string>{"Grunge", "Alternative Rock", "Anos 90"}, false)));
    // /*---------*/
    // /* MPB */

    // /* Cazuza */
    // colecao.push_front(*(new MIDIA("Cazuza", "Exagerado", 1985, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 80"}, false)));
    // colecao.push_front(*(new MIDIA("Cazuza", "Só Se For A Dois", 1987, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 80"}, true)));
    // colecao.push_front(*(new MIDIA("Cazuza", "O Tempo Não Pára", 1988, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 80"}, false)));
    // colecao.push_front(*(new MIDIA("Cazuza", "Burguesia", 1987, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 80"}, true)));

    // /* Rita lee */
    // colecao.push_front(*(new MIDIA("Rita Lee", "Hoje É O Primeiro Dia Do Resto Da Sua Vida", 1972, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 70"}, true)));
    // colecao.push_front(*(new MIDIA("Rita Lee", "Flerte Fatal", 1987, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 80"}, false)));
    // colecao.push_front(*(new MIDIA("Rita Lee", "Bombom", 1983, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 80"}, true)));
    // colecao.push_front(*(new MIDIA("Rita Lee", "Balacobaco", 2003, "MPB", deque<string>{"MPB", "Rock Brasileiro", "Anos 2000"}, false)));

    // /* Djavan */
    // colecao.push_front(*(new MIDIA("Djavan", "A Voz e o Violão", 1975, "MPB", deque<string>{"MPB", "Brasil", "Anos 70"}, false)));
    // colecao.push_front(*(new MIDIA("Djavan", "Seduzir", 1980, "MPB", deque<string>{"MPB", "Brasil", "Anos 80"}, true)));
    // colecao.push_front(*(new MIDIA("Djavan", "Alumbramento", 1979, "MPB", deque<string>{"MPB", "Brasil", "Anos 70"}, false)));
    // colecao.push_front(*(new MIDIA("Djavan", "Malásia", 1996, "MPB", deque<string>{"MPB", "Brasil", "Anos 90"}, true)));

    // /* Belchior */
    // colecao.push_front(*(new MIDIA("Belchior", "Alucinacao", 1976, "MPB", deque<string>{"MPB", "Brasil", "Anos 70"}, true)));
    // colecao.push_front(*(new MIDIA("Belchior", "Coração selvagem", 1977, "MPB", deque<string>{"MPB", "Brasil", "Anos 70"}, false)));
    // colecao.push_front(*(new MIDIA("Belchior", "Paraíso", 1982, "MPB", deque<string>{"MPB", "Brasil", "Anos 80"}, true)));
    // colecao.push_front(*(new MIDIA("Belchior", "Nova série", 2007, "MPB", deque<string>{"MPB", "Brasil", "Anos 2000"}, false)));
    // /*---------*/
    // /* RAP */

    // /* Filipe Ret */
    // colecao.push_front(*(new MIDIA("Filipe Ret", "Numa Margem Distante", 2009, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, false)));
    // colecao.push_front(*(new MIDIA("Filipe Ret", "Vivaz", 2012, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, true)));
    // colecao.push_front(*(new MIDIA("Filipe Ret", "Revel", 2015, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, false)));
    // colecao.push_front(*(new MIDIA("Filipe Ret", "Audaz", 2018, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, true)));

    // /* Racionais MC's */
    // colecao.push_front(*(new MIDIA("Racionais", "Raio X do Brasil", 1993, "RAP", deque<string>{"RAP", "Brasil", "Anos 90"}, false)));
    // colecao.push_front(*(new MIDIA("Racionais", "Sobrevivendo no Inferno", 1997, "RAP", deque<string>{"RAP", "Brasil", "Anos 90"}, true)));
    // colecao.push_front(*(new MIDIA("Racionais", "Nada Como um Dia Apos o Outro Dia", 2002, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, false)));
    // colecao.push_front(*(new MIDIA("Racionais", "Racioniais MC's", 2013, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, true)));

    // /* Djonga */
    // colecao.push_front(*(new MIDIA("Djonga", "Heresia", 2017, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, true)));
    // colecao.push_front(*(new MIDIA("Djonga", "O MENINO QUERIA SER DEUS", 2018, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, false)));
    // colecao.push_front(*(new MIDIA("Djonga", "Ladrão", 2019, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, true)));
    // colecao.push_front(*(new MIDIA("Djonga", "NU", 2021, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, false)));
    // /* Costa Gold */
    // colecao.push_front(*(new MIDIA("Costa Gold", "Epifania Mixtape", 2013, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, false)));
    // colecao.push_front(*(new MIDIA("Costa Gold", "Posfácio", 2014, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, true)));
    // colecao.push_front(*(new MIDIA("Costa Gold", "300", 2017, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, false)));
    // colecao.push_front(*(new MIDIA("Costa Gold", "AUGE", 2021, "RAP", deque<string>{"RAP", "Brasil", "Anos 2000"}, true)));

    // /* CHAMADA DAS FUNÇÕES*/
    // /* Retire/Coloque comnetarios para selecionar as funçoes */
    // /* Mostrar todos os CD's */
    // /*ROCK*/
    // showAllCds("Pink Floyd", colecao);
    // showAllCds("Metallica", colecao);
    // showAllCds("Iron Maiden", colecao);
    // showAllCds("Nirvana", colecao);
    // /*MPB*/
    // showAllCds("Cazuza", colecao);
    // showAllCds("Rita Lee", colecao);
    // showAllCds("Djavan", colecao);
    // showAllCds("Belchior", colecao);
    // /*RAP*/
    // showAllCds("Filipe Ret", colecao);
    // showAllCds("Racionais", colecao);
    // showAllCds("Djonga", colecao);
    // showAllCds("Costa Gold", colecao);
    // /* -- */
    // /* Mostrar todos os DVD's */
    // /*ROCK*/
    // showAllDvds("Pink Floyd", colecao);
    // showAllDvds("Metallica", colecao);
    // showAllDvds("Iron Maiden", colecao);
    // showAllDvds("Nirvana", colecao);
    // /*MPB*/
    // showAllDvds("Cazuza", colecao);
    // showAllDvds("Rita Lee", colecao);
    // showAllDvds("Djavan", colecao);
    // showAllCds("Belchior", colecao);
    // /*RAP*/
    // showAllDvds("Filipe Ret", colecao);
    // showAllDvds("Racionais", colecao);
    // showAllDvds("Djonga", colecao);
    // showAllDvds("Costa Gold", colecao);
    // /* -- */
    // /* Mostra toda as midias de um artista */
    // showAll("Pink Floyd", colecao);
    // showAll("Metallica", colecao);
    // showAll("Iron Maiden", colecao);
    // showAll("Nirvana", colecao);
    // showAll("Cazuza", colecao);
    // showAll("Rita Lee", colecao);
    // showAll("Djavan", colecao);
    // showAll("Belchior", colecao);
    // showAll("Filipe Ret", colecao);
    // showAll("Racionais", colecao);
    // showAll("Djonga", colecao);
    // showAll("Costa Golds", colecao);
    // /* -- */

    // /* Mostra todas as midias de um ano */
    // showAllInYear(1979, colecao);
    // // Lista de anos dos albuns, em ordem.
    // // ROCK
    // // Pink FLoyd:  1973, 1979, 1975, 1994
    // // Metallica:   1988, 1983, 1983, 1986
    // // Iron Maiden: 1983, 1995, 2005, 2021
    // // Nirvana:     1989, 1991, 1992, 1993

    // // MPB
    // // Cazuza:      1985, 1987, 1988, 1987
    // // Rita Lee:    1972, 1987, 1983, 2003
    // // Djavan:      1975, 1980, 1979, 1996
    // // Belchior:    1976, 1977, 1982, 2007

    // // RAP
    // // Filipe Ret:  2009, 2012, 2015, 2018
    // // Racionais:   1993, 1997, 2002, 2013
    // // Djonga:      2017, 2018, 2019, 2021
    // // Costa Gold:  2013, 2014, 2017, 2021

    // /* -- */

    // /* Mostra todaas as midias daquele genero */
    // showAllByGen("Rock", colecao);
    // /* Escolha entre os generos: !! Case sensitive !! */
    // /*Rock*/ /*MPB*/ /*RAP*/
    //                  /* -- */

    // /* Mostra todas as palavras chaves */
    // /* Comente se não quiser ver as palavras chaves */
    // showAllKw(colecao);
    // /* -- */

    // return 0;
}