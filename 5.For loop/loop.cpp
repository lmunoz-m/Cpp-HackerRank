#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n1;
    int n2;
    int i;
    cin >> n1;
    cin >> n2;
    
    for( i = n1; i <= n2; i++)
    { 
        switch (i) {
            case 1:  printf("one"); 
                break;
            case 2:  printf("two"); 
                break;
            case 3:  printf("three"); 
                break;
            case 4:  printf("four"); 
                break;
            case 5: printf("five"); 
                break;
            case 6:  printf("six"); 
                break;
            case 7:  printf("seven"); 
                break;
            case 8:  printf("eight");
                break;
            case 9: printf("nine");
                break;
            default: 
                if (i % 2 == 0)
                    printf("even");
                else if(i % 2 != 0)
                    printf("odd"); 
        }
        printf("\n");
    }
    return 0;
}
