#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

/*0-linear search*/
int linear_search(int *array, size_t size, int value);

/*1-binary search*/
int binary_search(int *array, size_t size, int value);

/*7-jump search*/
int jump_search(int *array, size_t size, int value);

/*9-interpol search*/
int interpolation_search(int *array, size_t size, int value);

#endif