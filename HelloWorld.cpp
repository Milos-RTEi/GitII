#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<string> msg {"Hello100-xx1111", "C++", "World", "from", "VS Code", "and the C++ extension!"}


    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
