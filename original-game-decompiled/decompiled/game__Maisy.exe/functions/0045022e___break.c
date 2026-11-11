
/* ==== __break @ 0045022e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045022e-0045022e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


