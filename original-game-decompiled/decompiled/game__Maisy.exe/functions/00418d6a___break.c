
/* ==== __break @ 00418d6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418d6a-00418d6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


