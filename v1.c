#include <stdio.h>
#include <math.h>
int prost(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int pom(int arg) {
    while(arg != 0){
        int cif = arg % 10;
        if(prost(cif) == 0){
            return 1;
        }
        arg/=10;
    }
    return 0;
}
int main()
{
    int poc, kraj;
    scanf("%d %d", &poc, &kraj);
    while(poc <= kraj){
        if(pom(poc) == 0){
            printf("%d\n", poc);
        }
        poc++;
    }

    return 0;
}
