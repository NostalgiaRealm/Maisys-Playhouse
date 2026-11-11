
/* ==== __break @ 00423829 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00423829-00423829
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


