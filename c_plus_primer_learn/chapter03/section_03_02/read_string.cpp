//
// Created by haohe on 2023/2/16.
//
#include "iostream"
#include "cctype"
#include "vector"
using namespace std;


int* process_int(int* number){
    (*number)++;
    return number;
}

int main(){
    // string word;
    // while (cin >> word){
    //     cout << word << endl;
    // }
    // return 0;

    string str("some string");

    for (char c: str) {
        cout << c << endl;
    }

    auto it = str.begin();

    *it = toupper(*it);

    cout << str << endl;

    if(!str.empty()){
        str[0] = toupper(str[0]);
    }

    cout << str << endl;

    // 实例化 示例
    vector<int> my_vector;
    vector<vector<string>> file;

    cout << my_vector.size() << endl;


    // add elements to a vector at runtime
    vector<int> v2;
    for (int i = 0; i < 100; ++i) {
        v2.push_back(i);
    }

    cout << v2.size() << endl;

    int a = 0;
    int *pt = &a;
    pt = process_int(pt);

    cout << *pt << endl;
    cout << pt << endl;

}


