#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    // scanf("`format_specifier`", &val)
    //for example to read a character followed by a double
    /*char ch;
    double d;
    scanf("%c %lf", &ch, &d);*/ 
    int d;
    long d1;
    char c;
    double d2;
    double d3;
    
    scanf("%d %lu %c %lf %lf", &d, &d1, &c, &d2, &d3);
    printf("%d\n%lu\n%c\n%lf\n%lf\n", d, d1, c, d2, d3);
    return 0;
}
