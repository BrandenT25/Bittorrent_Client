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
  ifstream file;
  public:
    ReadFile(const string &fileName){
      index = 0;
      file.open(fileName, ios::in);
        if(!file.is_open()){
          throw runtime_error("Failed to open File");
        }
    }
  char getNextChar(){
      file.seekg(index, ios::beg);
      char c;
      file.get(c);
      if(!file){
        cout << "error reading file";
      }
      index += 1;
      return c;
  }
};


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
  while(ch != 'e'){
    break;
  }

}

string getChar();



void parseBencode(ReadFile& torrentFile){
  char ch = torrentFile.getNextChar();
  checkType(ch);
}
  


string inputHandler(){
  string file;
  cout << "What file will you like to parse:  ";
  cin >> file;
  return file;
}


int main(){
  string file = inputHandler();
  ReadFile torrentFile(file);
  parseBencode(torrentFile);
}

