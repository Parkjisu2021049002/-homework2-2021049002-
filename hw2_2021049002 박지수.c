#include <stdio.h>
int main()
printf("%d \n", 2021049002);
printf("박지수");

int i; //변수선언
int *ptr; //포인터 변수 선언
int **dptr; //ptr의 주소값을 저장하는 이중 포인터
i = 1234;
printf("[checking values before ptr = &i] \n"); 
printf("value of i == %d\n", i);// i의 값 출력
printf("address of i == %p\n", &i);//i의 주소 출력
printf("value of ptr == %p\n", ptr);//포인터의 값 출력
printf("address of ptr == %p\n", &ptr);// 포인터의 주소출력
ptr = &i; /* ptr is now holding the address of i */ //포인터 p는 i를 가리킴
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);
dptr = &ptr; /* dptr is now holding the address of ptr */ //이중포인터 d는 p를 가리킴
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);
printf("value of dptr == %p\n", dptr);
printf("address of dptr == %p\n", &dptr);
printf("value of *dptr == %p\n", *dptr);
printf("value of **dptr == %d\n", **dptr);
*ptr = 7777; /* changing the value of *ptr */ //p를 통하여 i에 7777저장
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
**dptr = 8888; /* changing the value of **dptr */ //d를 통하여 p에 8888저장
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
return 0;
