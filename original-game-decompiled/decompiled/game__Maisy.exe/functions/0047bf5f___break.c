
/* ==== __break @ 0047bf5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bf5f-0047bf5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


