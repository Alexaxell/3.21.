#include <stdio.h>

int main(void) {
    int GG;
    int MM;
    int AAAA;
    int GGM;
    printf("inserisci il giorno:\n");
    scanf("%d", &GG);
    printf("inserisci il mese:\n");
    scanf("%d", &MM);
    printf("inserisci l'anno:\n");
    scanf("%d", &AAAA);
    switch (MM) {
        case 4:
            case 6:
        case 9:
        case 11:
        GGM = 30;
        break;
        case 2:
            if (AAAA % 4 == 0)
                if (AAAA % 100 == 0)
                    if (AAAA & 400 == 0)
                        GGM = 29;
        else {
            GGM = 28;
        }
        break;
        case 1:
            case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        GGM = 30;
        break;
        default:
            GGM = 0;
        break;
    }
    if (GGM == 0) {
        printf("la data è sbagliata");
    }
    else {
        printf("la data è corretta");
    }
    return 0;
}
