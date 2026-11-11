
/* ==== __break @ 00409628 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409628-00409628
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


