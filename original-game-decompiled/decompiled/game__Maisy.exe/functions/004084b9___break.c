
/* ==== __break @ 004084b9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004084b9-004084b9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


