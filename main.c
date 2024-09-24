#include <stdio.h>

int main() {

    int gg1, gg2, mese1, mese2, anno1, anno2, differenza;

    printf("calcola la differenza di due date inserisci la prima data in formato dd mm yyyy:\n");
    scanf("%d %d %d",&gg1, &mese1, &anno1);

    printf("inserisci la seconda data:\n");
    scanf("%d %d %d",&gg2, &mese2, &anno2);

    differenza = gg2 - gg1 + (mese2 - mese1) * 30 + (anno2 - anno1) * 360;

    gg1 = differenza%30;
    mese1 = (differenza/30)%12;
    anno1 = differenza/360;

    printf("la differenza e' di %d giorni %d mesi e %d anni",gg1, mese1, anno1);

    return 0;
}