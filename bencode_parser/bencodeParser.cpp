#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <fstream>
using namespace std;

enum Types{
  Integer,
  String,
  List,
  Dictionary
}


struct bencodeNode{
  Types type;
  string value;

  vector<bencodeNode> list;
  map<string, bencodeNode> dictItems;

  union{
    int remainingLength;
    bool isReadingKey;

  }typeData;
}

void parseBencodeInteger(){
  
}

void parseBencode(string torrentFile){
  ifstream file(torrentFile);
  if(!file.is_open()){
    cerr << "Error file not found or not able to open" << endl;
  }
  char ch; 
  while(file.get(ch)){
    cout << ch;
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

