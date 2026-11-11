
/* ==== __break @ 00416f1a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00416f1a-00416f1a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


