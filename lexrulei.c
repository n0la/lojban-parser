# include "lojban.h"
# include "lexrules.h"

/* Module for lexer rule I: NAhE+BO */

/*
lexer_I_945             :  lexer_I_709  NAhE_583  BO_508
                        ;
*/

token *lexer_I_945_driver()
	{
	START(945);
	TRY(lexer_I_945_1);
	END;
	}

token *lexer_I_945_1()
	{
	INIT;
	IS(NAhE_583);
	IS(BO_508);
	RETURN;
	}
