/* Copyright 1992-2003 Logical Language Group Inc.
   Licensed under the Academic Free License version 2.0 */

/* Declare the node-generation routines used by the parser.
*/

YYSTYPE node1(int type, YYSTYPE n1);
YYSTYPE node2(int type, YYSTYPE n1, YYSTYPE n2);
YYSTYPE node3(int type, YYSTYPE n1, YYSTYPE n2, YYSTYPE n3);
YYSTYPE node4(int type, YYSTYPE n1, YYSTYPE n2, YYSTYPE n3, YYSTYPE n4);
YYSTYPE node5(int type, YYSTYPE n1, YYSTYPE n2, YYSTYPE n3, YYSTYPE n4, YYSTYPE n5);
YYSTYPE node6(int type, YYSTYPE n1, YYSTYPE n2, YYSTYPE n3, YYSTYPE n4, YYSTYPE n5, YYSTYPE n6);
YYSTYPE node7(int type, YYSTYPE n1, YYSTYPE n2, YYSTYPE n3, YYSTYPE n4, YYSTYPE n5, YYSTYPE n6, YYSTYPE n7);
YYSTYPE node8(int type, YYSTYPE n1, YYSTYPE n2, YYSTYPE n3, YYSTYPE n4, YYSTYPE n5, YYSTYPE n6, YYSTYPE n7, YYSTYPE n8);
YYSTYPE elidable(int type);
YYSTYPE toplevel(YYSTYPE n1);
