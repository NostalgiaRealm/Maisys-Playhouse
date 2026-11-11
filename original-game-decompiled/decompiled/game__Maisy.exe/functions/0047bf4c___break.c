
/* ==== __break @ 0047bf4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bf4c-0047bf4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


