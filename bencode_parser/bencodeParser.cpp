#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cctype>
#include <fstream>
#include <map>
using namespace std;

class ReadFile{
  int index;
  ifstring file;
  public:
    ReadFile(const string fileName&, index(0)){
      file.open(fileName, ios::in){
        if(!file.is_open){
          throw runtime_error("Failed to open File");
        }
        file.close();
      }
    }
  char getNextChar(){
    file.seekg(index, ios::beg);
    
    char c;
    file.get(c);

    if
  }



}


enum Types{
  Integer,
  String,
  List,
  Dictionary
};


struct bencodeNode{
  Types type;
  string value;

  vector<bencodeNode> list;
  map<string, bencodeNode> dictItems;

  union{
    int remainingLength;
    bool isReadingKey;
  }typeData;
};


void checkType(char ch){
  if(isdigit(ch)){
    cout << "number";
  }
  else{
    switch(ch){
      case 'i':
        cout << "integer";
        break;
      case 'd':
        break;
      case 'l':
        break;
    }
  }
}

void parseBencodeInteger(char ch){
  bencodeNode node;
  while(ch != 'e'):
    bencodeNode.list.push_back(ch);
    

}

string getChar();



void parseBencode(string torrentFile){
  ifstream file(torrentFile);
  if(!file.is_open()){
    cerr << "Error file not found or not able to open" << endl;
  }
  char ch; 
  while(file.get(ch)){
    checkType(ch);
  }
  file.close();
  
}
  


string inputHandler(){
  string file;
  cout << "What file will you like to parse:  ";
  cin >> file;
  return file;
}


int main(){
  string file;
  file = inputHandler();
  parseBencode(file);
}

