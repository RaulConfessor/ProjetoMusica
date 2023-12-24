#include "Musica.hpp"
#include <string>


void Musica::setCodigo(int COD){
  codigo = COD;
}
int Musica::getCodigo(){
  return codigo;
}
void Musica::setNome(string NOME){
  nome = NOME;
}
string Musica::getNome(){
  return nome;
}
void Musica::setCantor(string CANTOR){
  cantor = CANTOR;
}
string Musica::getCantor(){
  return cantor;
}
void Musica::setLancamento(int LANCA){
  lancamento = LANCA;
}

int Musica::getLancamento(){
  return lancamento;
}

Musica::Musica(int COD, string NOME, string CANTOR, int LANCA){
  setCodigo(COD);
  setNome(NOME);
  setCantor(CANTOR);
  setLancamento(LANCA);
}

void Musica::printMusica(){
  cout << "Nome da musica..... " << nome << endl;
  cout << "Cantor............. " << cantor << endl;
  cout << "Ano de lancamento.. " << lancamento << endl;
  cout << "Codigo............. " << codigo << endl;
}