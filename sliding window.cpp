#include<iostream>
using namespace std;

int main() {
    int user[] = {10, 20, 30, 40, 50};
    int days = 3;
    int n = 5;

    int windowsum = 0;

    // first window
    for(int i = 0; i < days; i++) {
        windowsum += user[i];
    }

    int maxsum = windowsum;
    int minsum = windowsum;

    cout << "Window sum: " << windowsum << endl;

    
    for(int i = days; i < n; i++) {
        windowsum = windowsum - user[i - days] + user[i];

        cout << "Window sum: " << windowsum << endl;

        if(windowsum > maxsum) {
            maxsum = windowsum;
        }
    }

    cout << "Maximum sum: " << maxsum << endl;
    
if(windowsum < minsum) {
            minsum = windowsum;}
            cout<<"Minum sum:"<<minsum<<endl;

    return 0;
}



