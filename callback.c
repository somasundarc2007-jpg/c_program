#include <stdio.h>
void sayHello(){
	printf("Hello, student! you just called me back!\n");
}
void studentWork(void(*callbackFunc)()){
	printf("student is doing homework...\n");
    callbackFunc();
}
int main(){
	studentWork(sayHello);
	return 0;
}