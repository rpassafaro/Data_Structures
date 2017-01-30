#include "vector.h"

int main()
{
	int temp[5] = {1,2,3,4,5};
	t_vector *vect;

	vect = vect_new(10, sizeof(int));
	//printf("%d\n", vectcap(vect));
	vect_insert(vect, vect->size, &temp[0]);
	vect_insert(vect, vect->size, &temp[1]);
	vect_insert(vect, vect->size, &temp[2]);
	vect_insert(vect, vect->size, &temp[3]);
	vect_insert(vect, vect->size, &temp[4]);
	printf("%d\n", *(int *)vectspot(0, vect));
	printf("%d\n", *(int *)vectspot(1, vect));
	printf("%d\n", *(int *)vectspot(2, vect));
	printf("%d\n", *(int *)vectspot(3, vect));
	printf("%d\n", *(int *)vectspot(4, vect));
	return 0;
}
