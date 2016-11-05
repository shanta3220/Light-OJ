#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
    int n, m, t, j = 1;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);
        if (m > n) swap(m, n);
        if ((n % 4 == 0 && m == 2)|| m == 1) m = n;
        else if(n % 2 == 0 && m == 2) m = n + 2;
        else if(n % 2 != 0 && (m == 2)) m = n + 1;
        else m = (m * n + 1) * 0.5;
        printf("Case %d: %d\n", j++, m);
    }
   
    return 0;
}
