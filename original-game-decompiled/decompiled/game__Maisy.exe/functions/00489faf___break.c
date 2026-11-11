
/* ==== __break @ 00489faf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489faf-00489faf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


