
/* ==== __break @ 0047bccd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bccd-0047bccd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


