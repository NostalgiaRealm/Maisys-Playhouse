
/* ==== __break @ 00486eaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486eaf-00486eaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


