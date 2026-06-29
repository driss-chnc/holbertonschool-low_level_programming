#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}

static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
			v = -v;
		dataset[i] = v;
	}
}

static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
	sum = (sum * 131ul) + (unsigned long)dataset[i];

	return (sum);
}

int main(void)
{
	unsigned long checksum;
	clock_t start;
	clock_t end;
	clock_t phase_start;
	clock_t phase_end;
	double total;
	double build;
	double process;
	double reduce;

    /* Début du temps total */
	start = clock();

    /* BUILD_DATA */
	phase_start = clock();
	build_dataset();
	phase_end = clock();
	build = (double)(phase_end - phase_start) / (double)CLOCKS_PER_SEC;

    /* PROCESS */
	phase_start = clock();
	process_dataset();
	phase_end = clock();
	process = (double)(phase_end - phase_start) / (double)CLOCKS_PER_SEC;

    /* REDUCE */
	phase_start = clock();
	checksum = reduce_checksum();
	phase_end = clock();
	reduce = (double)(phase_end - phase_start) / (double)CLOCKS_PER_SEC;

    /* Fin du temps total */
	end = clock();
	total = (double)(end - start) / (double)CLOCKS_PER_SEC;

	if (checksum == 0ul)
		printf("impossible\n");

	printf("TOTAL seconds: %.6f\n", total);
	printf("BUILD_DATA seconds: %.6f\n", build);
	printf("PROCESS seconds: %.6f\n", process);
	printf("REDUCE seconds: %.6f\n", reduce);

	return (0);
}
