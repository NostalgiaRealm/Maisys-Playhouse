
/* ==== __break @ 1401a4c7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4c7-1401a4c7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


