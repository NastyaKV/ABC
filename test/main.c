#define CTEST_MAIN

#include <ctest.h>
#include "alph.h"

CTEST(Letter, Znak)
{
	char a='?';
	bool result=isLetter(a);
	ASSERT_FALSE(result);
}

CTEST(Letter, Correct)
{
	char a='d';
	bool result=isLetter(a);
	ASSERT_TRUE(result);
}


CTEST(Letter, Digital)
{
	char a='9';
	bool result=isLetter(a);
	ASSERT_FALSE(result);
}

CTEST(Sort, CorrectSort) {
	 char input[]="aaaa aaab aaac aaba aabc abab aabaa";
	 int i = 0;
     int r = 0;
     int l = 0;
	 char output[1200][1200];
	 while(input[i] != '\0')
     {
        if(isLetter(input[i]))
            output[r][l++] = input[i];
        else if(l != 0)
        {
            output[r][l] = '\0';
            r++;
            l = 0;
        } 
        i++;   
     }
    sort(r, output);;
    char exp[]="abab";
	ASSERT_STR(exp, output[5]) ;
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
