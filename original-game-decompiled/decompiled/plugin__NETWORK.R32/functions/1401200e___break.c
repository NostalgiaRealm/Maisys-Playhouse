
/* ==== __break @ 1401200e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200e-1401200e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


