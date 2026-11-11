
/* ==== __break @ 0041ef9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef9e-0041ef9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


