
/* ==== __break @ 0044135f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044135f-0044135f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


