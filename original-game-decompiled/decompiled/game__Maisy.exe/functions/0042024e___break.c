
/* ==== __break @ 0042024e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042024e-0042024e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


