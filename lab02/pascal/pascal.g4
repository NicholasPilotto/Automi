grammar pascal;

start: 'program' ID ';' 'var' decl_list main_code EOF;

// regola per la dichiarazione di una lista di inizializzazione, oppure singola
decl_list: decl | decl decl_list;
decl: ID | ',' | ID ':' 'integer' ';';

main_code: 'begin' st_list 'end' '.';
code_block: statement | 'begin' st_list 'end';
st_list: statement ';' | statement ';' st_list;

// regola per la definzione di tutti i possibili operazioni del linguaggio
statement: assign | branch | out | in | repeat | operation;

// regola per la definizione di una assegnazione
assign: ID ':=' (expr | in);

// regole per la definizione di operazioni algebriche
operation: ID ':=' operations;
operations:
	expr
	| operations ADD operations
	| operations SUB operations
	| operations MUL operations
	| operations DIV operations
	| operations MOD operations
	| '(' operations ')';
ADD: '+';
SUB: '-';
MUL: '*';
DIV: '/';
MOD: '%';

// regole per la definizione di un operatore di scrittura in output di una stringa oppure una
// variabile
out: 'writeln' '(' (String | expr) ')';
String: '\'' ~[\r\n]* '\'';
// regole per la definizione di un operatore di lettura in input e la scrittura di tale valore in
// una variabile
in: 'readln' '(' ID ')';

// regola per la definizione di un espressione, la quale è formata da lettere (minuscole o
// maiuscole) oppure numeri
expr: NUMBER | ID;

// regole per la definizione di un if-statement oppure if-else-statement
branch: if_st | if_st else_st;
if_st: 'if' guard 'then' code_block;
else_st: 'else' code_block;

// regole per la definizione di un repeat-until-statement
repeat: 'repeat' st_list 'until' guard;
guard: relation | relation BOOLEAN_OPERATORS relation;

// regola per la definizione degli operatori booleani
BOOLEAN_OPERATORS: ('or' | 'and' | 'not');

// regole per la definizione di un confronto
relation:
	operations LT operations
	| operations LEQ operations
	| operations EQ operations
	| operations NEQ operations
	| operations GEQ operations
	| operations GT operations
	| OPEN_BRACKET relation CLOSE_BRACKET;

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
R_COMMENT: '(*' .*? '*)' -> skip;
// .*? matches anything until the first */
C_COMMENT: '{' .*? '}' -> skip;
// .*? matches anything until the first }
LINE_COMMENT: '//' ~[\r\n]* -> skip;
// ~[\r\n]* matches anything but \r and \n
WS: [ \n\t\r]+ -> skip;
ErrorChar: .;