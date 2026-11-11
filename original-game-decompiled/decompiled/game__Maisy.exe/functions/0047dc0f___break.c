
/* ==== __break @ 0047dc0f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dc0f-0047dc0f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


