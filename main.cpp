#include <iostream>
#include "text.h"

void menu() {
    printf("1- Wprowadz tekst\n");
    printf("2- Wyswietl tekst\n");
    printf("3- Zamien na duze litery\n");
    printf("4- Zamien na male litery\n");
    printf("5- Wyjdz\n");
    printf("Wybierz opcje: ");
}
int main(){
    char text[100] = " ";
    int choice;
    do{
        menu();

        printf("wybiez - ");
        scanf("%d", &choice);
        clear();
        switch(choice){
            case 5:
                break;
            case 1:
                entertext(text);
                break;
            case 2:
                printf("Tekst: %s\n", text);
                break;
            case 3:
                big_Letters(text);
                printf("Zmieniono na duze litery");
                break;
            case 4:
                small_Letters(text);
                printf("Zmieniono na male litery");
                break;
        }
    }while(choice!=5);
}