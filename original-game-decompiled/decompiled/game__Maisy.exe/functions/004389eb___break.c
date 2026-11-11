
/* ==== __break @ 004389eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004389eb-004389eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


