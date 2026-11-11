
/* ==== __break @ 0040f68e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f68e-0040f68e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


