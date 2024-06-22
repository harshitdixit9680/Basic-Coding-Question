#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "harshit";
    int len = str.length();
    
    // Two-pointer technique
    int left = 0;
    int right = len - 1;
    
    while (left < right) {
        // Swap characters without using built-in function
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        // Move pointers towards the center
        left++;
        right--;
    }
    
    cout << str << endl;
    return 0;
}
