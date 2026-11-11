
/* ==== __break @ 0044145f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044145f-0044145f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


