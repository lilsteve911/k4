#include <stdio.h>
#include <math.h>

/*
2 (7p). Koristedi naredbu while i funkciju getchar() za čitanje karaktera iz ulazne sekvence karaktera
koja se sastoji od slova i cifara, izračunati zbir svih trocifrenih brojeva.
primer: ab123de5000f4g567hh rezultat: 690
(objašnjenje: brojevi koji su trocifreni su 123 i 567, u zbiru su 690)
 */
int count(int arg){
    int br = 0;
    while(arg != 0){
        arg/= 10;
        br++;
    }
    return br;
}
int main()
{
    char c;
    int broj = 0, powr = 1, zbir = 0;
    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9'){
            broj = broj * 10 + (c - '0');
        }
        else{
            int rez = count(broj);
            if(rez == 3){
                zbir += broj;
            }
            broj = 0;
            if(c == '\n'){
                break;
            }

        }
    }
    printf("%d", zbir);
    return 0;
}
