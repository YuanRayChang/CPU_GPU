#include <stdio.h>
#include <stdlib.h>

#define no_steps 1000
#define NX 500
#define NY 500
#define N (NX*NY)
#define D 160
#define D_circle 10

void Allocate_Memory();
void Free_Memory();
void Copy_memory();
void Send_To_Device();
void Get_From_Device();
void Call_GPUSerial_Function();
void Call_GPUFunction(); 
void ReadData();


