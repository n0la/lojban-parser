# include "lojban.h"
# include "lexrules.h"

/* Module for lexer rule D: eks with KE */

/*
lexer_D_916             :  lexer_C_703  EK_root_911  KE_551
                        |  lexer_C_703  EK_root_911  simple_tag_971  KE_551
                        ;
*/

token *lexer_D_916_driver()
	{
	START(916);
	TRY(lexer_D_916_1);
	TRY(lexer_D_916_2);
	END;
	}

token *lexer_D_916_1()
	{
	INIT;
	CALL(EK_root_911);
	IS(KE_551);
	RETURN;
	}

token *lexer_D_916_2()
	{
	INIT;
	CALL(EK_root_911);
	CALL(simple_tag_971);
	IS(KE_551);
	RETURN;
	}
