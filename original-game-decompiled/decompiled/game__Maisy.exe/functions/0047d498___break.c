
/* ==== __break @ 0047d498 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d498-0047d498
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


