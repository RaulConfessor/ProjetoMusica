#include "GerenciadorMusicas.hpp"
#include <sstream>

string GerenciadorMusicas::getNome(){
  return nome;
}

int GerenciadorMusicas::getQtd(){
  quantidade = ListaMusicas.size();
  return quantidade;
}

void GerenciadorMusicas::adicionaMusica(int COD, string NOME, string CANTOR, int LANCA){
    try {
        if (ListaMusicas.empty() == true){
            Musica musica_nova(COD, NOME, CANTOR, LANCA);
            ListaMusicas.push_back(musica_nova);
        } else{
            for(int i=0; i<ListaMusicas.size(); i++){
                if(ListaMusicas[i].getCodigo() == COD)
                    throw COD;

            }Musica musica_nova(COD, NOME, CANTOR, LANCA);
            ListaMusicas.push_back(musica_nova);
        }
    } catch(int COD){
        cout << "Erro!! O codigo " << COD << " ja existe.\n" << endl;
    }
}

void GerenciadorMusicas::mostrarLista(){
  for(int i = 0;i < ListaMusicas.size(); i++){
    ListaMusicas[i].printMusica();
    cout << endl;
  }
}

void GerenciadorMusicas::salvarMusicaArquivo(string txt){
  std::ofstream PastaMusica(txt, std::ios::out | std::ios::app);
  if(PastaMusica.is_open()){
  for(int i=0; i < ListaMusicas.size(); i++){
    PastaMusica << ListaMusicas[i].getCodigo() << ", ";
    PastaMusica << ListaMusicas[i].getNome() << ", ";
    PastaMusica << ListaMusicas[i].getCantor() << ", ";
    PastaMusica << ListaMusicas[i].getLancamento() << endl;
      } cout << endl << "adicionado com sucesso!!" << endl;
    PastaMusica.close();
    ListaMusicas.clear();
  } else
      cout << "Erro ao abrir o arquivo" << endl;
}

void GerenciadorMusicas::addMusicasArquivo(string arquivo) {
    std::ifstream Pasta("Jasalvas.txt", std::ios::in);
    GerenciadorMusicas listaNova;
    if (Pasta.is_open()){
        string linha;
        string linha2;
        string COD;
        string NOME;
        string CANTOR;
        string LANCA;


        while (std::getline(Pasta,linha,'\n')) {

            std::istringstream iss(linha);
            while (std::getline(iss, linha2, ';')){
                try {
                    if (COD.empty())
                        COD = linha2;
                    else if (NOME.empty())
                        NOME = linha2;
                    else if (CANTOR.empty())
                        CANTOR = linha2;
                    else if (LANCA.empty()){
                        LANCA = linha2;
                        listaNova.adicionaMusica(std::stoi(COD),NOME,CANTOR,std::stoi(LANCA));
                        //listaNova.salvarMusicaArquivo(arquivo);

                        COD.clear();
                        NOME.clear();
                        CANTOR.clear();
                        LANCA.clear();
                        linha2.clear();

     }

                } catch (const std::invalid_argument &e) {
                    std::cerr << "Erro ao converter string para inteiro: " << e.what() << std::endl;
                }
            }
        }
    }listaNova.salvarMusicaArquivo("Musicas.txt");
    Pasta.close();
}

 bool GerenciadorMusicas::buscarMusicaCod(int COD) {
    std::ifstream Pasta("Musicas.txt");
    int linha;

}



