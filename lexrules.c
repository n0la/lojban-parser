# include "lojban.h"
# include "lexrules.h"

/* Module for lexer rule S: ijeks */

/*
lexer_S_995             :  lexer_S_719  I_root_956
                        ;
*/

token *lexer_S_995_driver()
	{
	return cpd_reduce(I_root_956(), 995);
	}
