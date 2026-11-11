
/* ==== __break @ 0044dee6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dee6-0044dee6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


