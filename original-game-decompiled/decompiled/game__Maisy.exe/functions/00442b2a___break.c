
/* ==== __break @ 00442b2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b2a-00442b2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


