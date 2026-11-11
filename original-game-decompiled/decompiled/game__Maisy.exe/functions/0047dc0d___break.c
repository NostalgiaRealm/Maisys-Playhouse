
/* ==== __break @ 0047dc0d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dc0d-0047dc0d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


