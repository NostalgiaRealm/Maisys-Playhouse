
/* ==== __break @ 00421599 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00421599-00421599
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


