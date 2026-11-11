
/* ==== __break @ 0047aa0c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047aa0c-0047aa0c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


