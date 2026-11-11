
/* ==== __break @ 0042971e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042971e-0042971e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


