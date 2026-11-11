
/* ==== __break @ 0047dc0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dc0e-0047dc0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


