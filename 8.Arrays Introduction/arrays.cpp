#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n = 0, num = 0, i = 0;
    cin >> n;
    int *res = (int *) malloc (n * sizeof(int));
    
    while(i < n)
    {
        scanf("%d", &num);
        res[i] = num;
        i++;
    }
    i--;
    while(0<=i)
    {
        printf("%d ", res[i]);
        i--;
    }
       
    return 0;
}
