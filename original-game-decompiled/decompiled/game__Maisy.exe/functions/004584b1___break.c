
/* ==== __break @ 004584b1 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584b1-004584b1
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


