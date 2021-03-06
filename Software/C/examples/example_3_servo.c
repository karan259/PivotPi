#include "pivotpi.c"

int main(void)
{
	int i;
	printf("PivotPi 3 servo example\n");

	if (pivotpi_setup(addr_00,60.0) < 0)
	{
		printf("Error in setup\n");
		return -1;
	}
	sleep_ms(1000);
	while (1)
	{
		angle(SERVO_1, 0);   // Set Servo 1 to 0 Degrees.
        angle(SERVO_2, 0);   // Set Servo 2 to 0 Degrees.
        angle(SERVO_3, 0);   // Set Servo 3 to 0 Degrees.
		
        led(SERVO_1, 0);    // Set LED 1 to 0 Power.
        led(SERVO_2, 0);    // Set LED 2 to 0 Power.
        led(SERVO_3, 0);     // Set LED 3 to 0 Power.
		sleep_ms(500);
		
		angle(SERVO_1, 90);  // Set Servo 1 to a 90 Degree Angle.
		angle(SERVO_2, 90);
		angle(SERVO_3, 90);
		
		led(SERVO_1, 75);    // Set Servo 1 to a 75 Degree Angle.
		led(SERVO_2, 75);
		led(SERVO_3, 75);
		sleep_ms(500);
	}
}
