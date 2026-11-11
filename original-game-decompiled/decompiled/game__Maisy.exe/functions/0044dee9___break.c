
/* ==== __break @ 0044dee9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dee9-0044dee9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


