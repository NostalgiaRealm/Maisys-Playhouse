
/* ==== __break @ 0047715f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047715f-0047715f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


