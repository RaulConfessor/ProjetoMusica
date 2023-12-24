#ifndef GERENECIADOR_H
#define GERENCIADOR_H

#include "Musica.hpp"
#include <fstream>


class GerenciadorMusicas{
private:
  string nome = "Gerenciador de Musicas";
  int quantidade;
  std::vector<Musica>ListaMusicas;
public:
  string getNome();
  int getQtd();
  void adicionaMusica(int COD, string NOME, string CANTOR, int LANCA);
  void removerMusica(); //Fazer dps
  void mostrarLista();
  void salvarMusicaArquivo(string txt);
  void addMusicasArquivo(string arquivo);
  bool buscarMusicaCod(int COD);
};

#endif GERENCIADOR_H