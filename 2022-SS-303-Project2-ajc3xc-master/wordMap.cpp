#include <iostream>
#include <map> // A map will be used to count the words.
#include <fstream> // Will be used to read from a file.
#include <string> // The map's key value.
#include <cctype> //for searching through strings
using namespace std;


//instantiate iterator for map
template<typename K, typename V>
using MapIterator = typename std::map<K,V>::const_iterator;


//Print map of words (when finished)
template<typename K, typename V>
void PrintMap(const std::map<K,V>& m)
{
  int i = 0;
    for (MapIterator<K, V> iter = m.begin(); iter != m.end(); iter++)
    {
        std::cout << "Key: " << iter->first << " "<< "Values: " << iter->second;
        if(i%3==2)  std::cout<<std::endl;
        else  std::cout<<"\t\t";
        i++;
    }

    //show total number of words in the text (good for testing)
    std::cout<<std::endl;
    std::cout<<"Total unique words: "<<i<<std::endl;

}


//add a word to the map of words
template<typename K, typename V>
void addToMap(std::map<K,V>& wordsCount, const string word)
{
  //Look if it's already there.
  if (wordsCount.find(word) == wordsCount.end()) // Then we've encountered the word for a first time.
      wordsCount[word] = 1; // Initialize it to 1.
  else // Then we've already seen it before..
      wordsCount[word]++; // Just increment it.
}


int main(void)
{
    //file
    static const char* fileName = "4507.txt.utf-8";

    // Will store the word and count.
    map<string, unsigned int> wordsCount;


    {
        // Begin reading from file:
        ifstream fileStream(fileName);

        // Check if file opened
        if (fileStream.is_open())
            while (fileStream.good())
            {
                // Store the next word in the file in a local variable.
                string word;
                fileStream >> word;

                string webAddress = "https";


                int len = word.size();
                //gets rid of 'normal' punctuation problems

                //don't filter if a web address (usually unique enough)
                if( !(word.find(webAddress) != std::string::npos) )
                for(int i = 0; i<len; i++)
                {
                  //delete punctuation (except in special cases)

                  if(    ispunct(word[i]) && ( (i==0 || i == len-1) || (word[i] != '-') )    )
                  {
                    word.erase(i,1);
                    len = word.size();
                    i--;
                  }
                }

                //convert uppercase letters to lowercase
                for(int i = 0; i<len; i++)
                {
                  word[i] = tolower(word[i]);
                }


                //Deal with double hyphen
                for(int i = 0; i<len; i++)
                {
                  if(    (word[i]=='-' && word[i+1]=='-')    )
                  {

                    string lower = word.substr(0,i);
                    addToMap(wordsCount, lower);
                    word.erase(0, i+2);
                    len -= i+2;
                    i=0;
                  }

                }

                //I'm not dealing with https because that would be complicated

                //add (remaining) word to map
                addToMap(wordsCount, word);
            }
        else  //File not openable
        {
            cerr << "Couldn't open the file." << endl;
            return EXIT_FAILURE;
        }

        // Print the words map.
        PrintMap(wordsCount);
    }

    return EXIT_SUCCESS;
}
