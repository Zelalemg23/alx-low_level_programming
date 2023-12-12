#include <unistd.h>
#include <string.h>

int custom_rand()
{
	static int counter = -1;

	counter++;
	if (counter == 0)
		return 8;
	if (counter == 1)
		return 8;
	if (counter == 2)
		return 7;
	if (counter == 3)
		return 9;
	if (counter == 4)
		return 23;
	if (counter == 5)
		return 74;

	return counter * counter % 30000;
}
