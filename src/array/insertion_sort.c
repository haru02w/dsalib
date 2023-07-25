#include "dsa_extra.h"
#include <stddef.h>
#include <string.h>
void ds_array_insertion_sort(void *array, unsigned length, size_t size,
			     int (*compare)(const void *, const void *))
{
	ds_byte_t *arr = array;
	// start at the second element (first is already a sorted sublist)
	for (int i = 1; i < length; i++) {
		int j = i - 1;
		// buffer to store the next element to be inserted
		ds_byte_t buffer[size];
		memcpy(buffer, arr + i * size, size);

		// NOTE: probably would have a better performance
		// just count how many elements is greater than `i` to call memmove once

		// move up all elements greater than `i`
		while (j >= 0 && compare(buffer, arr + j * size) < 0) {
			memmove(arr + (j + 1) * size, arr + j * size, size);
			--j;
		}

		memcpy(arr + (j + 1) * size, buffer, size);
	}
}
