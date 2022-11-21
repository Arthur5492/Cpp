#include "includes.hpp"

bool LoadMusic(string MusicFile, string *name, size_t *bpm, vector<size_t>*Music, vector<size_t>*Tempo);//Carrega a musica
bool CreateMusic(string Create);

void SelectLine(ifstream &file, size_t num);
