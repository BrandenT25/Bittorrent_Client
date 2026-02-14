#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cctype>
#include <fstream>
#include <map>

using namespace std;
namespace Bencode {
    const char INT_BEGIN = 'i';
    const char INT_END = 'e';
    const char LIST_BEGIN = 'l';
    const char LIST_END = 'e';
    const char DICT_BEGIN = 'd';
    const char DICT_END = 'e';
    const char STRING_DELIN = 'e';
}

struct bencodeValue;


struct bencodeList{
    vector<bencodeValue> listItems;
};


struct{
   map<string, bencodeValue> dictItems;
}bencodeDict;

struct bencodeValue{
    std::variant<long long, string, bencodeList, bencodeDict>;
}

string parseInt(const string bencodeInt){
    string finalBencodeInt;
    for(const char& c: bencodeInt){
        if(c != 'i' && c != 'e'){
            bencodeString += c;
        }else if(c == 'e'){
            return finalBencodeInt;
        } 
    }
}

string parseString(const string bencodeString, const int size){
    string finalBencodeString;
    size_t index = ;
    while(index < 3+size){
        finalBencodeString += bencodeString[index];
        index++;
    }
    return finalBencodeString;
}




int main(){




    return 0;
}
