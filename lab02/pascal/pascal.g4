grammar pascal;

start: 'program' ID ';' 'var' decl_list main_code EOF;

decl_list: decl | decl decl_list;
decl: ID | ',' | ID ':' 'integer' ';';

main_code: 'begin' st_list 'end' '.';
code_block: statement | 'begin' st_list 'end';
st_list: statement ';' | statement ';' st_list;

statement: assign | branch | out | in | repeat;

assign: ID ':=' expr;

// regole per la definizione di un operatore di scrittura in output di una stringa oppure una
// variabile
out: print | print out;
print: WRITE OPEN_BRACKET | '\'' | expr | '\'' | CLOSE_BRACKET;
WRITE: 'writeln';

// regole per la definizione di un operatore di lettura in input e la scrittura di tale valore in
// una variabile
in: read | read in;
read: READ OPEN_BRACKET | ID | CLOSE_BRACKET;
READ: 'readln';

// regola per la definizione di un espressione, la quale è formata da lettere (minuscole o
// maiuscole) oppure numeri
expr: NUMBER | ID;

// regole per la definizione di un if-statement
branch: 'if' relation 'then' code_block;

// regole per la definizione di un repeat-until-statement
repeat: 'repeat' statement 'until' guard;

guard: relation | 'or' relation;

// regole per la definizione di un confronto
relation:
	expr LT expr
	| expr LEQ expr
	| expr EQ expr
	| expr NEQ expr
	| expr GEQ expr
	| expr GT expr;

// regole per la definzione di operatori di confronto
EQ: '=';
LT: '<';
LEQ: '<=';
GT: '>';
GEQ: '>=';
NEQ: '<>';

// regola per la definizione di lettere minuscolo oppure maiuscole
ID: [a-z]+ | [A-Z]+;

// regola per la definizione di numeri
NUMBER: [0-9]+;

// regole per la definizione delle parentesi tonde
OPEN_BRACKET: '(';
CLOSE_BRACKET: ')';

// regole per la definizione dei vari commenti
R_COMMENT:
	'(*' .*? '*)' -> skip; // .*? matches anything until the first */
C_COMMENT:
	'{' .*? '}' -> skip; // .*? matches anything until the first }
LINE_COMMENT:
	'//' ~[\r\n]* -> skip; // ~[\r\n]* matches anything but \r and \n
WS: [ \n\t\r]+ -> skip;
ErrorChar: .;
