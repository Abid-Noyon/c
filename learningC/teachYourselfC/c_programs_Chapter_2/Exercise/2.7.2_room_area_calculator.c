/* #include<stdio.h>
int main(){

    int room,length,width,height,area,i,s=0;

    printf("Enter number of rooms:");
    scanf("%d",&room);

    for(i=1;i<=room;i++){

        printf("Enter dimensions of room %d in sqrft:",i);
        scanf("%d%d%d",&length,&width,&height);

        area=length*width*height;

        s=s+area;
        }
    printf("Total square footage of house is %d",s);

    return 0;
    } */

#include <stdio.h>

int main(void)
{
    int nRoom;
    float tArea = 0.0, rLenght, rwidth;
    printf("How many rooms there: ");
    scanf("%d", &nRoom);
    for (int i = 1; i <= nRoom; i++)
    {
        printf("Enter the length of room %d (in feet).", i);
        scanf("%f", &rLenght);
        printf("Enter the width of room %d (in feet).", i);
        scanf("%f", &rwidth);
        float roomArea = rLenght * rwidth;
        tArea += roomArea;
        printf("Room %d square footage: %.2f sq ft\n", i, roomArea);
    }

    printf("\nTotal square footage of the house: %.2f", tArea);
    return 0;
}

//_room_area_calculator