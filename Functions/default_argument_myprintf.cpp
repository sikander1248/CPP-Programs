#include <iostream>
#include <cstdio>
using namespace std;

void myprint(const char *str)
{
    printf(str);
}

void myprint(const char *str,FILE *fp)
{
    fprintf(fp , str);
}

int main( ){

    myprint("HELLO WORLD"); //Print to Monitor

    FILE    *fp = fopen("myfile.txt" , "w");
    myprint("WELCOME TO BANGALORE" , fp);    //Print to file

    return 0;
}


