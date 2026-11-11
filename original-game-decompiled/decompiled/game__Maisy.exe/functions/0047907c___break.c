
/* ==== __break @ 0047907c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047907c-0047907c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


