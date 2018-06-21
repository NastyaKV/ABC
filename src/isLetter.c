#include "alph.h"

bool isLetter(char a)
{
    if(((int)a >= 65 && (int)a <= 90) || ((int)a >= 97 && (int)a <= 122))
        return true;
    return false;
}
