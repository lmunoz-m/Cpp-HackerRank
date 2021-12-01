#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int res = 0;
    if (a > b && a > c && a > d)
        res = a;
    if (b > a && b > c && b > d)
        res = b;
    if (c > b && c > a && c > d)
        res = c;
    if (d > b && d > c && d > a)
        res = d;
    return res;
}