#include "syscall.h"

int main(){
	char c = SynchGetChar();
	PutChar(c);
	PutChar('\n');
	Halt();
}
