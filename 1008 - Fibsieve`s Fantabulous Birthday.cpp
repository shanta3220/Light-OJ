#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t, j = 1;
    long long x, y, row, column;
    double n;
    cin >> t;
    while(t--){
        cin >> n;
        x = ceil(sqrt(n));
        if(x % 2 != 0){
            y = n - ((x - 1) * (x - 1));
            if ( x < y ){
                row = x;
                column = 1 + (x * x) - n;

            }
            else {
                row = y;
                column = x;

            }

        }
        else {
            y = n - ((x - 1) * (x - 1));
            if ( x < y ){
                column = x;
                row = 1 + (x * x) - n;

            }
            else {
                row = x;
                column = y;

            }

        }

        cout << "Case " << j++ << ": " << column << " " << row<<"\n";
    }
}
