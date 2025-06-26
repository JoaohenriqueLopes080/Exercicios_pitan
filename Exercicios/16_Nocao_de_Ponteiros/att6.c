int v, u;
int *pv, *pu;
v = 45;           // v recebe 45
pv = &v;          // pv aponta para o endereço de v (1004)
*pv = v + 1;      // *pv (ou seja, v) recebe 46
u = *pv + 1;      // u recebe 47
pu = &u;          // pu aponta para o endereço de u (1000)


Resumo
Item	Valor
(a)	1004
(b)	1004
(c)	46
(d)	47
(e)	1000
(f)	1000
(g)	47
