
/* ==== __break @ 00416f1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00416f1f-00416f1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


