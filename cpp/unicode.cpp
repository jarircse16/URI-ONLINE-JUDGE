#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("x.txt",ios::out|ios::binary);
    for(int i=0;i<=5000;i++)
        out << (char)i;
    out.close();

    ifstream in("x.txt",ios::in|ios::binary);
    char c;
    for(int i=0;i<=500;i++)
    {
        in >> c;
        cout << (int)c << endl;
    }
    in.close();
    return 0;
}
