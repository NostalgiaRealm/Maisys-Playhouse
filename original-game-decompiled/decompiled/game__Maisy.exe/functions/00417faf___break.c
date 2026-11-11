
/* ==== __break @ 00417faf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417faf-00417faf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


