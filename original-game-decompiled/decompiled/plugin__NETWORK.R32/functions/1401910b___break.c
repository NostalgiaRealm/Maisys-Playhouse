
/* ==== __break @ 1401910b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910b-1401910b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


