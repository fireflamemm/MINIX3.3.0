#include <lib.h>
#include <stdio.h>
#include <sys/cdefs.h>
#include "namespace.h"
#include <lib.h>

#include <fcntl.h>
#include <stdarg.h>
#include <string.h>

int main() {
	message m;
	char *path;
	path = "/usr/src/testing_and_analysis.c";
	_loadname(name, &m);
	_syscall(VFS_PROC_NR,VFS_LSR, &m);
}