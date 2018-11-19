#include "types.h"
#include "stat.h"
#include "user.h"

// running system call howmany()
int
main(void)
{
	printf(1, "There are %d system calls.\n", howmany());
	exit();
}
