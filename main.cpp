#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    static bool areNumbersAscending(string s) {
        int index1 = 0, index2 = 0, prevNum = -1, nextNum = 0;
        basic_string<char> sub;
        while(index2>=0){
            index2 = s.find(' ', index1);
            if (s[index1]<='9' && s[index1]>='0'){
                sub = s.substr(index1, index2-index1);
                for(char i : sub){
                    nextNum = nextNum * 10 + i - '0';
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
    string inputString = "hello world 5 x 6";
//    a.areNumbersAscending(inputString);
    cout<<Solution::areNumbersAscending(inputString)<<endl;
    return 0;
}
