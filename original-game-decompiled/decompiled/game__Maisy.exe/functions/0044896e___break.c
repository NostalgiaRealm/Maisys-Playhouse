
/* ==== __break @ 0044896e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044896e-0044896e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


