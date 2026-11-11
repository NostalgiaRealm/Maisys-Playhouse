
/* ==== __break @ 0044dd99 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dd99-0044dd99
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


