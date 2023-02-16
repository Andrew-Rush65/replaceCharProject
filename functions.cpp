#include <string>

void bleep(std::string word, std::string &text) {

for(int i=0; i < text.size(); ++i ) {
  
  int match_num = 0;

  for(int j=0; j < word.size(); ++j){

    if(text[i+j] == word[j]) {

      ++match_num;

    }

    if(match_num == word.size()) {

      for(int k = 0; k < word.size(); ++k) {

        text[k+i] = '*';

      }

    }

  }

}

}