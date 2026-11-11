
/* ==== __break @ 0047715e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047715e-0047715e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


