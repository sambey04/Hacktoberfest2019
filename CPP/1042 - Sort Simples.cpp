#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
    vector<int>v1;
    vector<int>v2;
    int _in; 
    
    for(size_t i = 0; i < 3; i++)
    {
        cin >> _in;
        v1.push_back(_in);
        v2.push_back(_in);
    }    

    sort(v1.begin(), v1.begin()+3);
    
    for (vector<int>::iterator it=v1.begin(); it != v1.end(); ++it){
        cout << *it << endl;
    }
    cout<<endl;
    for (vector<int>::iterator it=v2.begin(); it != v2.end(); ++it){
        cout << *it << endl;
    }
    return 0; 
}
