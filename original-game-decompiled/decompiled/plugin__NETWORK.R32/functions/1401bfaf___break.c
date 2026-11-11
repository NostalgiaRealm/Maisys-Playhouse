
/* ==== __break @ 1401bfaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfaf-1401bfaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


