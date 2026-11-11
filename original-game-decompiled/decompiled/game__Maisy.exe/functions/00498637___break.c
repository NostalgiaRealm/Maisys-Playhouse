
/* ==== __break @ 00498637 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498637-00498637
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


