#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for ( it = lst.begin();it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    list<int> list1;
    list<int> list2(3);

    list1.push_back(1);
    list1.push_back(3);
    list1.push_front(0);
    list1.push_back(2);
    list1.push_back(7);
    list1.push_back(5);

    cout << "List 1" << endl;
    display(list1);

    list<int> :: iterator itr;
    itr = list2.begin();
    *itr = 10;
    itr++;
    *itr = 20;
    itr++;
    *itr = 100;

    cout<< "List 2 " << endl;
    display(list2);

    cout << "Sort List 1 " << endl;
    list1.sort();
    display(list1);

    return 0;
}
