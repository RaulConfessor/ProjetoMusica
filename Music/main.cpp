#include <iostream>
#include <fstream>
#include <string>
#include "Musica.hpp"
#include "GerenciadorMusicas.hpp"
#include <cstdlib>




int main() {


    GerenciadorMusicas lista1;
    lista1.adicionaMusica(45324535, "Algum ritmo", "Dionisio", 2016);
    lista1.adicionaMusica(4324, "Arrasta pra cima", "Turma do Pagode", 2022);
    lista1.adicionaMusica(4324, "Batom de Cereja", "Ze vazqueiro", 2021);
    lista1.adicionaMusica(3321, "Nego Drama", "Mc Poze", 2020);
    lista1.mostrarLista();
    lista1.salvarMusicaArquivo("Musicas.txt");
    lista1.adicionaMusica(320043, "Melhor so", "Kayblack", 2023);
    lista1.salvarMusicaArquivo("Musicas.txt");

    GerenciadorMusicas lista2;
    lista2.addMusicasArquivo("Musicas.txt");



    //setMusicasPreSalvas("JaSalvas.txt");
    //GerenciadorMusicas lista1;

    return 0;
}