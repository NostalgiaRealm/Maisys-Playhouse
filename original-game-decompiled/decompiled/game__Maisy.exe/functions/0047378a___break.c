
/* ==== __break @ 0047378a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047378a-0047378a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


