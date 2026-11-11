
/* ==== __break @ 0047378c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047378c-0047378c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


