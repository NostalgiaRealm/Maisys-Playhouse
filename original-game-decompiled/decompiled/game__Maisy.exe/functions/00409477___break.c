
/* ==== __break @ 00409477 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409477-00409477
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


