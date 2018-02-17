#include "gpumain.h"
extern float *h_a;
extern float *h_b;
extern float *h_c;
extern float *d_a;

int main() {
	int i;

        Allocate_Memory();
	for(i=0;i<N;i++){
	h_a[i]=i;
	h_b[i]=0.0;
	}
	Send_To_Device();
	for(i=0;i<no_steps;i++){
	Call_GPUFunction();
	}
	Get_From_Device();
	for(i=0;i<10;i++)
	printf("%f\n",h_b[i]);
	Free_Memory();
    return 0;
}

