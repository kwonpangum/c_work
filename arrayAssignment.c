#include <stdio.h>

int main (void) {

	int nums1[] = {1, 2, 3, 4, 5};
	int nums2[] = {1, 2, 3, 4, 5};
	
	if (nums1 == nums2) {
		printf("nums1 is equals to nums2");
	}	else {
		printf("nums1 is not equals to nums2");
	}
	printf("\n");
	return 0;
}
