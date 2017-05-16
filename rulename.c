# include "lojban.h"
# include "rulename.i"

/* This module provides utilities for converting type codes to rule names
or selma'o names.
	rulename(type) returns the rule or selma'o name corresponding to type.
*/

char *
rulename(type)
int type;
	{
	int i;

	for (i = 0; i < RULECOUNT; i++)
		if (rulenames[i].type == type)
			return rulenames[i].text;
	return "";
	}
