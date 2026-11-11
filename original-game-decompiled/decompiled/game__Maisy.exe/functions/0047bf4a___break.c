
/* ==== __break @ 0047bf4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bf4a-0047bf4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


