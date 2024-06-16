#include"stringBuilder.h"

using namespace std;

StringBuilder::StringBuilder(){}

void StringBuilder::append(const string& part){
    parts.push_back(part);
}

string StringBuilder::build() const{
    string result;

    size_t total = 0;
    for(string const& part: parts){
        total += part.length();
    }

    //Reserve Memory
    result.reserve(total);

    //Concate strings
    for(string const& part: parts){
        result += part;
    }

    return result;
}