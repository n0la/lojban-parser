/* Copyright 1992-2003 Logical Language Group Inc.
   Licensed under the Academic Free License version 2.0 */

#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

# include "token.h"
# include "grammar.h"

# define isC(ch) (strchr("bcdfgjklmnprstvxz", (ch)) ? 1 : 0)
# define isV(ch) (strchr("aeiouy", (ch)) ? 1 : 0)

# define isEnd(tok) ((tok)->type == 0)

# define MAXLINE 75
# define QUANTUM 200
# define STRINGQUANTUM 100

extern int line;
extern int column;
extern FILE *stream;

char *getword();
void print(token *tok);
void rprint(token *tok);
void yprint(token *tok);
void prologize(char *p);
void downcase(char *p);
void tree(token *tok);
void print1(token *tok);
void rprint1(token *tok);
void tree1(token *tok);
void need(int n, FILE *stream);
void add(token *parent, token *child);
void destroy(token *t);
int makefree(void);
token *lex(void);
int iscmene(char *p);
void cmenecheck(char *p, char *bad);
int isbrivla(char *p);
char *newstring(int n);
void memcheck(void *p, char *err);
token *settype(token *t, int type);
token *filter();
token *selmao(void);
token *termin(void);
char *rulename(int type);
token *glue();
token *fabsorb();
int isindicator(token *tok);
token *lerfu();
token *absorb(void);
token *gettoken(void);
token *fail(token *tok);
void release(token *tok);
token *cpd_reduce(token *tok, int type);
token *is(int type, token *result);
token *compound();
int yylex(void);
void yyerror(char *msg);
int main(int ac, char **av);
void setflags(char **args);
void copyright();
void mkcmavo(void);

# include "node.h"

extern int D_valsi;
extern int D_cpd_lex;
extern int D_cpd_reduce;
extern int D_lex;
extern int D_reduce;
extern int D_elidable;

extern int interactive;

extern long stringspace;
extern long tokspace;
