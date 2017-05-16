# include "lojban.h"
# include "version.h"

void
copyright()
	{
	fprintf(stderr, "2;5;");
	/* VERSION is a string, so VERSION + 1 strips the first character */
	fprintf(stderr, VERSION + 1);
	fprintf(stderr, "moi ke lojbo genturfa'i\n");
	fprintf(stderr,
"Copyright 1991,1992,1993 The Logical Languages Group, Inc.  All Rights Reserved\n");
	}
