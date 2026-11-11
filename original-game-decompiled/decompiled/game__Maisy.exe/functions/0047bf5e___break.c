
/* ==== __break @ 0047bf5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bf5e-0047bf5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


