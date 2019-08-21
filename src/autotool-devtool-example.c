/*
 * Copyright (C) 2019  Trevor Woerner <Trevor Woerner <twoerner@gmail.com>>
 */

#include <stdio.h>
#include <stdlib.h>
#include "libautotool-devtool-example.h"
#include "config.h"

int
main (void)
{
	printf("Hello, world!\n");
	printf("version: %s\n", VERSION);
	lib_function();

	return EXIT_SUCCESS;
}
