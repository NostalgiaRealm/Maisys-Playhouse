
/* ==== __break @ 0047a05e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a05e-0047a05e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


