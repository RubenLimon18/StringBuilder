#include "../includes/stringBuilder.h"

using namespace std;

//Main class
int main(){
    StringBuilder word;

    word.append("Hola ");
    word.append("Mundo ");

    cout<<word.build();
}