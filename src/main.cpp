#include "../includes/stringBuilder.h"

using namespace std;

//Main class
int main(){
    
    //Simplemente un comentario
    StringBuilder word;

    word.append("Hola ");
    word.append("Mundo ");

    cout<<word.build();
}