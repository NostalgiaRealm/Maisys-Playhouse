
/* ==== __break @ 0042369e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042369e-0042369e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


