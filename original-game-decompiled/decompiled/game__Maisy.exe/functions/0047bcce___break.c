
/* ==== __break @ 0047bcce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bcce-0047bcce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


