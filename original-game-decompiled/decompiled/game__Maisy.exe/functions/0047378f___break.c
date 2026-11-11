
/* ==== __break @ 0047378f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047378f-0047378f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


