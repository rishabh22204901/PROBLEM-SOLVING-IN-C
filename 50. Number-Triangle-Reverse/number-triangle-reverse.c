// Print the given pattern

// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>
int main(){
    for (int i = 4; i >= 1; i--)
{
    for (int j = 1; j <= i ; j++)
    {
        printf("%d", j);
    }

    printf("\n");
    
}
}
