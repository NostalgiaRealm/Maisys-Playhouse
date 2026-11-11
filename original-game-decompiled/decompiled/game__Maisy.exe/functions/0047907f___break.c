
/* ==== __break @ 0047907f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047907f-0047907f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


