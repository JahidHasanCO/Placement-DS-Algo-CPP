#include <bits/stdc++.h>
using namespace std;

int subs(string input, string output[]){
    
    if(input.empty()){
        output[0] = "";
        return 1;
    }

    string smallInput = input.substr(1);
    int smallOutputSize = subs(smallInput,output);

    for (int i = 0; i < smallOutputSize; i++)
        output[i + smallOutputSize] = input[0] + output[i];
    
    return 2 * smallOutputSize;
}

int main()
{
    string input;
    cin >> input;
    string* output = new string[1000];
    int n = subs(input,output);
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << endl;
    }
    
    return 0;
}
