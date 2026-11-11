
/* ==== __break @ 0041efde ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041efde-0041efde
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


