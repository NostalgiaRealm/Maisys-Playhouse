
/* ==== __break @ 00442c0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c0e-00442c0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


