nclude <stdio.h>
#include<math.h>
using namespace std;
void update(int *a,int *b) {
    // Complete this function  
    int a_s = *a;
    int b_s = *b;
    *a = a_s + b_s;
    int c = a_s - b_s;  
    *b = abs(c);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
