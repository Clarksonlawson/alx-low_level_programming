#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer in "hh:mm" format.
 */
void jack_bauer(void)
{
	int hour, minute;

	/* Loop through all hours (0 to 23) */
	for (hour = 0; hour < 24; hour++)
	{
		/* Loop through all minutes (0 to 59) */
		for (minute = 0; minute < 60; minute++)
		{
			/* Print the time in hh:mm format */
			printf("%02d:%02d\n", hour, minute);
		}
	}
}

