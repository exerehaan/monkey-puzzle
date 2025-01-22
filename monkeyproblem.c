#include<stdio.h>

float monkey(float z, float x , float y){
    float net_distance = x-y;
    float distance = z-net_distance;


    if(distance <net_distance){
        return (((float)2)/3)*distance;
    }
    else{
        return monkey(distance, x,y)+2.0;

    }
       
}


int main(){
    float z, x, y;
    printf("Enter the height of pole: ");
    scanf("%f",&z);

    printf("Enter the distance that monkey covers in 1 minute: ");
    scanf("%f",&x);

    printf("Enter the distance that monkey slips down by in next minute: ");
    scanf("%f",&y);

    printf("The time taken for moneky to climb is %f",monkey(z,x,y));
    
    return 0;
}