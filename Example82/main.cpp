#include <string>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> mapStu;
    mapStu[5] = "Chung";
    mapStu[6] = "Ha";
    mapStu[8] = "An";
    mapStu[2] = "Thanh";
    mapStu[3] = "Lan";
    cout << "Student[8]=" << mapStu[8] << endl;
    cout << "Map size: " << mapStu.size() << endl;
    for (map<int, string>::iterator i = mapStu.begin(); i != mapStu.end(); ++i)
    {
        cout << (*i).first << ":" << (*i).second << endl;
    }
    return 0;
}