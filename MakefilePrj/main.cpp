#include <iostream>
#include "UtlStr.h"
#include "omp.h"

//int main()
//{
//	std::string upper = "TEST";
//	std::string lower = UtlStr::toLower(upper);
//	std::cout << lower << std::endl;
//	std::cout << "Hello World!" << std::endl;
//}

int main (int argc, char *argv[])
{
	int nthreads, tid;

	omp_set_num_threads(4);
	
	/* Fork a team of threads giving them their own copies of variables */
#pragma omp parallel private(nthreads, tid)
  {
		
		/* Obtain thread number */
		tid = omp_get_thread_num();
		printf("Hello World from thread = %d\n", tid);
		
		/* Only master thread does this */
		if (tid == 0)
    {
			nthreads = omp_get_num_threads();
			printf("Number of threads = %d\n", nthreads);
    }
		
  }  /* All threads join master thread and disband */
	
}
