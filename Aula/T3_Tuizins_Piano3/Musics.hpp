#ifndef MUSICS_HPP
#define MUSICS_HPP
#include "includes.hpp"

bool LoadMusic(string MusicFile, string *name, size_t *bpm, vector<size_t>*Music, vector<size_t>*Tempo);//Carrega a musica
bool CreateMusic(string Create);

void SelectLine(ifstream &file, size_t num);//Poder selecionar linha especifica
vector<size_t> Scale(vector<string> lala); // Transformar notas em string para size_t

#endif
