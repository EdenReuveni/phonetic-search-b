
#include "PhoneticFinder.hpp"

#include <iostream>
#include <stdexcept>
#include <algorithm>


#include <string>
using namespace std;

//Submitter: Eden Reuveni

void toLower(string* word){
	  transform(word->begin(),word->end(),word->begin(),::tolower);
}

int findByLetter(char firstCh,char secondCh){
    if ((secondCh==firstCh) || ((firstCh=='k' || firstCh=='q'|| firstCh=='c') && (secondCh=='k' || secondCh=='q' || secondCh=='c')) ||
		((firstCh=='u' || firstCh=='o') && (secondCh=='u' || secondCh=='o')) ||
		((firstCh=='v' || firstCh=='w') && (secondCh=='v' || secondCh=='w')) ||
    	((firstCh=='j' || firstCh=='g') && (secondCh=='j' || secondCh=='g')) ||
    	((firstCh=='p' || firstCh=='b'|| firstCh=='f') && (secondCh=='p' || secondCh=='b' || secondCh=='f')) ||
		((firstCh=='z' || firstCh=='s') && (secondCh=='z' || secondCh=='s')) ||
    	((firstCh=='y' || firstCh=='i') && (secondCh=='y' || secondCh=='i')) ||
    	((firstCh=='d' || firstCh=='t') && (secondCh=='d' || secondCh=='t')))
		 	return 1;
	else
    	return 0;
}

string phonetic::find(string text, string word) {
    if(word =="")
		throw runtime_error("Invalid word");
    string tmp, newWord;
    int appearances=0;
    	toLower(&word);
	for (int i=0;i<text.length();++i) {
        if(text[i]!=' ') {
            tmp.append(1,text[i]);
        }
        if((i==text.length()-1) || (text[i]==' ') ){
            if(word.length()==tmp.length()){
                newWord=tmp;
                toLower(&tmp);
				for(int i=0;i<word.length();++i){
                   appearances+=findByLetter(tmp[i],word[i]);
                }
               if(appearances==word.length()){
                   return newWord;
               }
            }
            tmp.clear();
            appearances=0;
        }
    }
   throw runtime_error("Did not find the word '" + word + "' in the text");
}


