
/* ==== __break @ 0047db6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047db6f-0047db6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


