#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int>numbers;
    for(int i=0; i<s.size(); i+=2){
        int num = s[i] - '0';
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i];
        if(i != numbers.size() -1){
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}
