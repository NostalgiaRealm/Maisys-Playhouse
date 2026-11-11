
/* ==== __break @ 1402079f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402079f-1402079f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


