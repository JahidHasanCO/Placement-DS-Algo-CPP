#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string,int> m;

    //insert 
    pair<string, int > p("abc",1);
    m.insert(p);
    m["hi"] = 2;

    //finding

    cout << m["abc"] << endl;
    cout << m.at("hi") << endl;

    cout << m["ghi"] << endl;


    //check Presense

    if(m.count("ghi") > 0){
        cout << "ghi is present.";
    }

    return 0;
}
