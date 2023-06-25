/* calculate bmi and find whether the person is underweight,normal,over or obese for the given weight in form
 of ponds and height in form of feet and inches , use table for the rest information(1kg=2.24 ponds)*/
 #include<stdio.h>
 int main()
 {
 	int w,f,i,h;
 	float BMI;
 	printf("Enter your weight in ponds:");
 	scanf("%d",&w);
 	printf("Enter your height in feet and inches:");
 	scanf("%d%d",&f,&i);
 	h=f*12+i;
 	BMI=w*703/h*h;
 	printf("%f",BMI);
 }
