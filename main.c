#include <stdio.h>

enum Type {WHISKEY, VODKA, BEER, TEQUILA, WINE, CHAMPAGNE, RUM, GIN, COGNAC, LIQUEUR};

struct Producer {
    char name[40];
    char country[40];
};

struct liquor {
    int id;
    char name[40];
    enum Type type;
    float price;
    int quantity;
    int age;
    struct Producer producer;
};

int main(void) {
    printf("Liquor Store\n");
    return 0;
}