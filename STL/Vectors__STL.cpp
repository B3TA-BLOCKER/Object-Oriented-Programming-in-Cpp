#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    /*
        decleration syntax of a vector;

        vector<data_type of> name_of_variable;
    */
    vector<int> vec;
    /*
         Vector automatically manages the size no need to declare it.
    */

    int element;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter an element you want to enter in the vector : ";
        cin >> element;
        // The push_back function is used to store the values in a vector;
        vec.push_back(element);
    }
    /*
        we can also use pop_bak()
            -> It prints all of the elements intead of ther last elements;
    */
    // vec.pop_back();
    cout << endl;
    display(vec);
    /*
        Now we'll be using insert
            ->it takes two arguments;
                =>Iterator {it's like a pointer which points to the element of the vector}
                => the number you want to add to the vector.
    */
    /*
         Syntax for declearing iterator;
             => vector<int> :: iterator iter = vec.begin()
         -> iter = vec.begin()  is used because we want to point the iterator to point to the first elements of the vector.
    */
    vector<int>::iterator iter = vec.begin();
    vec.insert(iter, 90);
    display(vec);

    // If we want to insert the same value multiple times so we just need to add another argument giving it the value of its recursion.
    vec.insert(iter, 5, 90); // Itmeans 90 will be inserted 5 times;
    display(vec);
}