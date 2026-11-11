
/* ==== __break @ 00486aab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aab-00486aab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


