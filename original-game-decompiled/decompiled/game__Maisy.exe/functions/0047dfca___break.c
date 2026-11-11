
/* ==== __break @ 0047dfca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dfca-0047dfca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


