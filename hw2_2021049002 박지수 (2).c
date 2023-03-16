#include <stdio.h>
int main()
{
char charType; //문자형 변수 크기확인
int integerType; //정수형 변수 크기확인
float floatType; //실수형 변수 크기확인
double doubleType;  //실수형 변수 크기확인
printf("Size of char: %ld byte\n",sizeof(charType)); //문자 기본형 변수 크기출력
printf("Size of int: %ld bytes\n",sizeof(integerType));//정수 기본형 변수 크기출력
printf("Size of float: %ld bytes\n",sizeof(floatType));//실수 기본형 변수 크기출력
printf("Size of double: %ld bytes\n",sizeof(doubleType));//실수 기본형 변수 크기출력
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));//문자형 변수 크기출력
printf("Size of int: %ld bytes\n",sizeof(int));//정수형 변수 크기출력
printf("Size of float: %ld bytes\n",sizeof(float));//실수형 변수 크기출력
printf("Size of double: %ld bytes\n",sizeof(double));//실수형 변수 크기출력
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); //문자 포인트 변수의 크기출력
printf("Size of int*: %ld bytes\n",sizeof(int*)); //정수 포인트 변수의 크기출력
printf("Size of float*: %ld bytes\n",sizeof(float*)); //실수 포인트 변수의 크기출력
printf("Size of double*: %ld bytes\n",sizeof(double*)); //실수 포인트 변수의 크기출력
return 0;
}

