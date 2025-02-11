#include <iostream>

using namespace std;

int scoreOfString(string s) {
    int result = 0;
    for(int i = 0; i < s.length() - 1; i++){
        result += abs(int(s[i]) - int(s[i + 1]));
    }
    return result;
}

int main(){
    string input;
    cout << "Enter your string: ";

    cin >> input;

    int ans = scoreOfString(input);

    cout << "The score of your string is: " << ans << endl;

    return 0;

}
