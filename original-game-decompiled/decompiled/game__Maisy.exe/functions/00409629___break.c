
/* ==== __break @ 00409629 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409629-00409629
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


