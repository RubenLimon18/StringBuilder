#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H

#include<iostream>
#include<vector>
#include<string>

//String Builder Class
class StringBuilder{
    private: 
        std::vector<std::string> parts;

    public:
        //Add to constructor
        StringBuilder();

        //Append, add strings to contructor
        void append(const std::string& part);

        //Concate the strings
        std::string build() const;

};

#endif