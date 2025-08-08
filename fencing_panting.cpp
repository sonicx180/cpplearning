#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


int main() {
    freopen("paint.in", "r",stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
       if ( a == c && b == d) {
        cout << b - a;
        return 0;
    }
    int greatest_num = d;
    int smallest_num = a;
    bool overlap = false;
    // if a > c && < d then they are overlapping
    if ( a > c && a < d) {
        overlap = true;
    }
    else if (c > a && c < b) {
        overlap = true;
    }
    else {
        overlap = false;
    }

    if(b > greatest_num) {
        greatest_num = b;
    }

    if(c < smallest_num) {
        smallest_num = c;
    }


    if(overlap) {
        cout << greatest_num - smallest_num;
    }
    else {
        cout << (b-a) + (d-c);
    }

 
}


