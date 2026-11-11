
/* ==== __break @ 004a094f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a094f-004a094f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


