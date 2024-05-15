/* #include <stdio.h>

float compute(float x);

int main() {

	float weight,e_weight;
	printf("Enter your weight:");
	scanf("%f",&weight);
	e_weight=compute(weight);
	printf("Your effective weight on the moon is:%.2f",e_weight);
	return 0;
}

float compute(float x){
	x=x*0.17;
	return x;
} */

// ____________________________
// practice
#include <stdio.h>

float eMweight(float weight);
// eMweight means effective moon weight

int main()
{
	float eWeight, mWeight;
	printf("Enter your weight in earth: ");
	scanf("%f", &eWeight);
	eMweight(eWeight);
	return 0;
}
float eMweight(float weight)
{
	printf("Effective moon weight: %.2f\n", 0.17 * weight);
}
