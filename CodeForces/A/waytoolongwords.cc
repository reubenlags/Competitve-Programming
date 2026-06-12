#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++){
        string s;
        getline(cin, s);
        if (s.size() > 10){
            int count = 0;
            for (int i = 1; i < s.size() - 1; i++){
                count++;
    
            }
            cout << s[0] << count << s[s.size()-1] << endl;
        }
        else cout << s << endl;

    }
        
        
    

}