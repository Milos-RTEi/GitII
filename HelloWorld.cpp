#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int A = 11;
    int B = 25;

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
