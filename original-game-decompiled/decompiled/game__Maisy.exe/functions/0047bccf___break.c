
/* ==== __break @ 0047bccf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bccf-0047bccf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


