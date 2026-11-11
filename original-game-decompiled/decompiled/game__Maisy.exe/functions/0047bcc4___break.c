
/* ==== __break @ 0047bcc4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bcc4-0047bcc4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


