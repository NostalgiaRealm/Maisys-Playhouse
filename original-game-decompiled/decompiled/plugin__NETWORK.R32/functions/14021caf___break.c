
/* ==== __break @ 14021caf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021caf-14021caf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


