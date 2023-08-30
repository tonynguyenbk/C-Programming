#include <stdio.h>
#include <windows.h>


int checkSensor(int analogRead_0) {
	if (analogRead_0 > 400) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int analogRead_0 = 0;
	analogRead_0 += 500;
	Beep(1000, 500);    // Beep is a function in windows.h and work in VSCode

	int t = checkSensor(analogRead_0);
	if (t == 1)
		printf("turn on alarm!!!\a\n"); // \a is a bell character but not run in VSCode
	else
		printf("it's okey now!\n");
	
	return 0;
}