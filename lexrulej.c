# include "lojban.h"
# include "lexrules.h"

/* Module for lexer rule J: NA+KU */

/*
lexer_J_950             :  lexer_J_710  NA_578  KU_556
                        ;
*/

token *lexer_J_950_driver()
	{
	START(950);
	TRY(lexer_J_950_1);
	END;
	}

token *lexer_J_950_1()
	{
	INIT;
	IS(NA_578);
	IS(KU_556);
	RETURN;
	}
