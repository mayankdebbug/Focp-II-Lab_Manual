#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("final.txt");
    string line;
    if (!fin.is_open())
    {
        cout << "\n issue with the file, cant read";
        return 0;
    }
    while (getline(fin, line))
    {
        cout << line << endl;
        cout<<"\n read cursor position"<<fin.tellg()<<endl;
    }
    fin.close();
}
