
/* ==== __break @ 0047bf4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bf4d-0047bf4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


