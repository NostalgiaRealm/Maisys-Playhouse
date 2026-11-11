
/* ==== __break @ 0047376a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047376a-0047376a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


