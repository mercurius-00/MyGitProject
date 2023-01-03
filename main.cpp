#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        int index1 = 0, index2 = 0, prevNum = -1, nextNum = 0;
        basic_string<char> sub;
        while(index2>=0){
            index2 = s.find(' ', index1);
            if (s[index1]<='9' && s[index1]>='0'){
                sub = s.substr(index1, index2-index1);
                for(int i = 0; i < sub.size(); i++){
                    nextNum = nextNum * 10 + sub[i] - '0';
                }
                cout<<nextNum<<endl;
                if(prevNum>=nextNum){
                    return false;
                }
                prevNum = nextNum;
                nextNum = 0;
            }
            index1 = index2+1;
        }
        return true;
    }
};

int main() {
    string inputString = "hello world 5 x 5";
    Solution a;
//    a.areNumbersAscending(inputString);
    cout<<a.areNumbersAscending(inputString)<<endl;
    return 0;
}
