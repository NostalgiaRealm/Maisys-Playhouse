
/* ==== __break @ 0047bccb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bccb-0047bccb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


