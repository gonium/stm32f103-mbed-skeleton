#include "stm32f103c8t6.h"
#include "mbed.h"
#include "rtos.h"

DigitalOut led1(PC_13);
Serial pc(PA_9, PA_10);
Thread led;

void led_blinker() {
	while(true) {
		led1 = !led1;
		Thread::wait(1000);
	}
}

// main() runs in its own thread in the OS
int main() {
//	confSysClock();
	pc.printf("Startup \r\n");
	led1 = 1;

//	led.start(led_blinker);
	while (true) {
		//led1 = !led1;
		pc.printf("Foo!\r\n");
		Thread::wait(2000);
	}
}

