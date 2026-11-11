
/* ==== __break @ 00416f18 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00416f18-00416f18
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


