
/* ==== __break @ 0044013f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044013f-0044013f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


