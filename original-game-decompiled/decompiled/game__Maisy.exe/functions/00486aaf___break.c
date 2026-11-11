
/* ==== __break @ 00486aaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aaf-00486aaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


