
/* ==== __break @ 0048fa3a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fa3a-0048fa3a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


