#include "metro.h"

#include <iostream>

using namespace std;

string
read_word(istream& input)
{
    // TODO: считать слово без пробелов или несколько слов в кавычках.
    string Word="";
    input >> Word;
    if (Word.size()>0 && Word[0]=='"')
    {
        string Result=Word;
        while (Word[Word.size()-1]!='"')
        {
            input>>Word;
            Result+=" "+Word;
        }
        //Result[0]=Result[Result.size()-1]="";
        return Result;
    }
    else
    {
        return Word;
    }
}

