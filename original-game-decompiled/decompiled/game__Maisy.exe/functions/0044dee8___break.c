
/* ==== __break @ 0044dee8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dee8-0044dee8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


