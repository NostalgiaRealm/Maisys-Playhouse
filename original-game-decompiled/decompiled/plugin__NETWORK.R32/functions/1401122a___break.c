
/* ==== __break @ 1401122a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122a-1401122a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


