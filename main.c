#include <stdio.h>

int main(){
int motorCount = 0;
int packages = 0;
float packageWeight = 0;
const float motorPower = 5.6;
int i = 0;

//This program makesv sure the weight of the freight on a conveyorbelt dosn't exceed the motorcapacity.

printf("active motors?: "); // asking for active motor count
scanf("%d", &motorCount); // input active motor count

printf("how many packages?: "); // asking for package count
scanf("%d", &packages); // input package count

for(int i=0; i<packages; i++){// Loop for antal pakker indtil i>packages
printf("Input weight of each package?: ");
float tempWeight = 0; // midlertidig samlet vægt for pakkerne
scanf("%f", &tempWeight); // indtast pakkevægt pr. pakke
packageWeight = tempWeight+packageWeight;
printf("%.2f kg\n", packageWeight);
}

double capacity = (motorCount*motorPower)/packageWeight;// double capacity for at kunne håndtere både integers og floats

if(capacity >= 1) {
    printf("Weight is okidoki!");
} else {
    printf("Weight is not okidoki!");
}//if else control statements for at printe ok eller ikke ok
return 0;    
}