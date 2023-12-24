#ifndef MUSICA_H
#define MUSICA_H


#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::cout; using std::endl;

class Musica{
private:
   int codigo;
   string nome;
   string cantor;
   int lancamento;
  std::vector<Musica>listaMusicas;

public:
  Musica(int COD, string NOME, string CANTOR, int LANCA);
  int getCodigo();
  void setCodigo(int COD);
  string getNome();
  void setNome(string NOME);
  string getCantor();
  void setCantor(string CANTOR);
  int getLancamento();
  void setLancamento(int LANCA);
  void adicionarMusica(int COD, string NOME, string CANTOR, int LANCA);
  void printMusica();
  };

#endif MUSICA_H