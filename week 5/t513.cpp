#include <iostream>
#include <string>
#include <map>
using namespace std;

map <string, string> phones;
string name;

int main() {
    cin >> name;
    phones["Tom"] = "555-3322";
    phones["Mary"] = "555-8976";
    phones["Jon"] = "555-1037";
    phones["Rachel"] = "555-1400";
    phones["Sherry"] = "555-8873";
    if (phones.find(name) != phones.end()) cout << phones[name];
    else cout << "Not found";
    return 0;
}