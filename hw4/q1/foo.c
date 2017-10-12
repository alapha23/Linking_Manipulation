#include <stdio.h>
#include "foo.h"
#include "bar.h"

int main(){
	foo_dep1();
	foo_dep2();
	do_bar();
	bar_dep1();
	bar_dep2();
	return 0;
}
