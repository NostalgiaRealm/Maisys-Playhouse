
/* ==== __break @ 0049f33e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f33e-0049f33e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


