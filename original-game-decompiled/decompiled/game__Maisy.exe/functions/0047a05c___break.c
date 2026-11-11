
/* ==== __break @ 0047a05c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a05c-0047a05c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


