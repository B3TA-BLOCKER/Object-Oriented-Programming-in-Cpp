#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

void display(list<int> &ls)
{
    list<int>::iterator it;
    for (it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // Empty List of length (0) Zero
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    list<int> list2(4); // Empty List of Size 4
                        // The Memory for 7 Integers are allocated but nothing is inserted in it.
                        // we can not use the push_back because it already have elements we judt need to set their values.
                        // How to set the values ??

    list<int>::iterator it;
    it = list2.begin();
    *it = 45;
    it++;
    *it = 54;
    it++;
    *it = 34;
    it++;
    *it = 65;
    it++;

    display(list2);

    // To pop any number or element in between the list we can use the remove function;
    list1.remove(9);
    // this dunction will remove all the element in the list which is equal to the element passed.
    // To sort the list
    list1.sort();
    cout << "The Sorted list : ";
    display(list1);
    //  To merge two lists
    list1.merge(list2);
    list1.sort();
    cout << "Ater Merging : ";
    display(list1);
    // To reverse a list
    list1.reverse();
    cout << "Reversed List : ";
    display(list1);
    return 0;
}