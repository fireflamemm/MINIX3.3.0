#include <lib.h>
#include <stdio.h>

int main() {
	message m;
	_syscall(VFS_PROC_NR,VFS_LSR, &m);
}