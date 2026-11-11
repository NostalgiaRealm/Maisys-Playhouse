
/* ==== __break @ 00466586 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00466586-00466586
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


