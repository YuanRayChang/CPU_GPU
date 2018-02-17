CUDA_LIB := -L/usr/local/cuda-5.5/lib64 -lcuda -lcudart
#INC_CUDA := -I/usr/local/cuda-5.5/include 

all: MAIN

MAIN: CPU_CORE GPU_CORE
	g++ main.o gpumain.o $(CUDA_LIB) -O3 -o test.run 
CPU_CORE:
	g++ -O3 -c main.c 
GPU_CORE: 
	nvcc -O3 -c gpumain.cu
clean:
	rm *.o
