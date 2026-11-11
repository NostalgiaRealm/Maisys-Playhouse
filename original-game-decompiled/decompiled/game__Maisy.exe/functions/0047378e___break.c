
/* ==== __break @ 0047378e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047378e-0047378e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


