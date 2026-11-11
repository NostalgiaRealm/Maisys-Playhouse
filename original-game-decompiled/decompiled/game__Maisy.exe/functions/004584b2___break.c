
/* ==== __break @ 004584b2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584b2-004584b2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


