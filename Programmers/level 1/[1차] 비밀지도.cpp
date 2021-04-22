// idea: 비트연산

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < n; i++){
        int sum = arr1[i] | arr2[i];
        string s = "";
        for(int j = 0; j < n; j++){
            s = sum & 1 ? '#' + s : ' ' + s;
            sum >>= 1;
        }
        answer.push_back(s);
    }
    return answer;
}
