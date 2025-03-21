#include <stdio.h>
int main() {
         int secund = 0;
         printf("Write secunds: ");
         scanf("%d",&secund);
         int hour = secund / 3600;
         int all = secund % 3600;
         int minuts = all / 60;
         int secunds = all & 60;
         printf(" %d hourss,  %d minuts,  and %d secunds\n", hour, minuts, secunds);

    return 0;
}
