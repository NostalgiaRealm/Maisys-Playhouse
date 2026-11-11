
/* ==== __break @ 0044b28f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044b28f-0044b28f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


