
/* ==== __break @ 0047bcca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bcca-0047bcca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


