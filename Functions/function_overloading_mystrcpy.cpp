#include <iostream>
using namespace std;

void mystrcpy(char *dest,const char *src)
{
    while((*dest = *src))  
    {   dest++;
        src++;
    }
}
void mystrcpy(char *dest,const char *src,int n)
{
    for(int i = 0 ; i < n && (*dest = *src) ; i++)
    {   dest++;
        src++;
    }
}

int main()
{
    char src[20] = "SIKANDER";
    char dest1[20] = "";
    char dest2[20] = "";
    mystrcpy(dest1 , src);
    mystrcpy(dest2 , src , 3);
    cout <<"Dest 1 = " << dest1 << endl;
    cout <<"Dest 2 = " << dest2 << endl;
}



