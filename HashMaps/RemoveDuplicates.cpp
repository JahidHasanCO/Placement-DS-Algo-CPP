#include <bits/stdc++.h>
using namespace std;

vector<int> removeDUplicates(int * arr, int size){
    
    vector <int> outputs;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if(seen.count(arr[i]) < 1){
            seen[arr[i]] = true;
            outputs.push_back(arr[i]);
        }
    }
    return outputs;
}

int main()
{
    int arr[] = {1,2,3,4,2,2,3,3,1,5,6,7,5,8,6};
    vector<int> outputs = removeDUplicates(arr,15);

    for (int i = 0; i < outputs.size(); i++)
    {
        cout << outputs[i] << " " ;
    }
    

    return 0;
}

