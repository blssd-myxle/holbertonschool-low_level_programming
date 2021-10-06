#include "main.h"
/**
	* swap_int - swaps 2 integers values
	* @the_doctor: pointer for first integer
	* @the_master: pointer for second interger
	* Return: nothing
	*/

void swap_int(int *the_doctor, int *the_master)
{
	int tardis = *the_doctor;
	*the_doctor = *the_master;
	*the_master = tardis;
}
