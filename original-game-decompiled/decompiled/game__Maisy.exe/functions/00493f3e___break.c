
/* ==== __break @ 00493f3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493f3e-00493f3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


