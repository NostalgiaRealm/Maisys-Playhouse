
/* ==== __break @ 004584c1 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584c1-004584c1
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


