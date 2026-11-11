
/* ==== __break @ 1401910f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910f-1401910f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


