
/* ==== __break @ 0047374f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047374f-0047374f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


