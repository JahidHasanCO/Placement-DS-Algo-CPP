#include <iostream>
using namespace std;

void removeChar(char str[],char c){
    
    //Base Case
    if(str[0] == '\0') //when string will be empty it will be return
        return;
    
    if(str[0] != c)
        removeChar(str + 1, c); 
    else{
        int i = 1;
        for (; str[i] != '\0'; i++)
            str[i-1] = str[i];
        str[i-1] = str[i];
        removeChar(str,c);                    
    }

}

int main()
{
    char str[] = "ASXFDXXKJ";
    removeChar(str,'X');
    cout << str << endl;
    return 0;
}
