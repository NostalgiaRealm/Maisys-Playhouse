
/* ==== __break @ 0044df0f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044df0f-0044df0f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


