#include<stdio.h>


int main (){

    int weight;

    printf("Input boxer's weight: ");
    scanf("&d", &weight);


    if (weight>=190)
        printf("The boxer's class is Heavyweight.");
        else if (weight>=154||weight<=189){
            printf("The boxer's class is Middleweight.");
            }
        else if (weight >= 153||weight<=122){
            printf("The boxer's class is Featherweight.");
            }
        else if (weight >= 121||weight<=115){
            printf("The boxer's class is Bantamweight.");
            }
        else
            printf("The boxer's class is Flyweight.");

    return 0;

}


/*

#include<stdio.h>

int main (){

    int x, y;

    printf("Input x and y: ");
    scanf("%d %d", &x, &y);

    printf("The value of x = %d, y = %d\n", x, y);


    if (x>0&&y>0)
        printf("Quadrant 1");
        else if (x<0&&y>0){
            printf("Quadrant 2");
        }
        else if (x>0&&y<0){
            printf("Quadrant 4");
        }
    else
        printf("Quadrant 3");

    return 0;
}
*/

/*
#include<stdio.h>
void main (){

    char x;
    printf("What is your chosen weapon?: ");
    scanf("%c",&x);

    printf("Your chosen weapon is %c", x);


  else if (x<0, y>0){
        printf("Quadrant 2");
    }
    else if (x>0, y<0){
        printf("Quadrant 4");
    }




    return 0;
}
*/
