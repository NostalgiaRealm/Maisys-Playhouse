
/* ==== __break @ 0047bcc7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bcc7-0047bcc7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


