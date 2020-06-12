#define MEALY_UNION 0
#define MEALY_CONCAT 1
#define MEALY_ATOMIC 2
#define MEALY_KLEENE 3

#ifndef AST_MEALY_H
#define AST_MEALY_H

#include "AST_FSA.h"
#include "LiteralList.h"
#include "InputExpression.h"

struct ASTMealy;

typedef struct ASTMealyAtomic {
    InputExpression * input;
    LiteralList * output;
} ASTMealyAtomic;

typedef struct ASTMealyConcat {
    struct ASTMealy * lMealy;
    struct ASTMealy * rMealy;
} ASTMealyConcat;

typedef struct ASTMealyKleene {
    struct ASTMealy * mealy;
} ASTMealyKleene;

typedef struct ASTMealyUnion {
    struct ASTMealy * lmealy;
    struct ASTMealy * rmealy;
} ASTMealyUnion;

typedef struct ASTMealy{
	char type;
	union{
		struct ASTMealyUnion mealyUnion;
		struct ASTMealyConcat mealyConcat;
		struct ASTMealyAtomic mealyAtomic;
		struct ASTMealyKleene mealyKleene;
	};
} ASTMealy;

#endif