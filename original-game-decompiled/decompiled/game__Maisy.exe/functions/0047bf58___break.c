
/* ==== __break @ 0047bf58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bf58-0047bf58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


