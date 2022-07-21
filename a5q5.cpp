#include <iostream>
#include <iterator>
#include <map>
#include <string>
using namespace std;

void printMap(map<string,string> m1) {
    map<string,string>::iterator itr;
    for (itr = m1.begin(); itr != m1.end(); itr++) {
        cout << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
}

void printCapital(map<string,string> m1) {
    string state; 
    cout << "Enter State" << endl;
    getline(cin, state);
    cout << endl;
    map<string,string>::iterator itf = m1.find(state);
    cout << "Capital Of " << state << " is " << itf->second << endl;


}

int main() {
    map<string, string> stateDataMap;
    stateDataMap.insert(pair<string,string>("Nebraska","Lincoln"));
    stateDataMap.insert(pair<string,string>("New York","Albany"));
    stateDataMap.insert(pair<string,string>("Ohio","Columbus"));
    stateDataMap.insert(pair<string,string>("California","Sacramento"));
    stateDataMap.insert(pair<string,string>("Massachusetts","Boston"));
    stateDataMap.insert(pair<string,string>("Texas","Austin"));
    printMap(stateDataMap);


    stateDataMap["California"] = "Los Angeles";

    printMap(stateDataMap);

    printCapital(stateDataMap);



}