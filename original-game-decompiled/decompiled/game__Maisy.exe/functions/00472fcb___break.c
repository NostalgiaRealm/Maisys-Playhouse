
/* ==== __break @ 00472fcb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fcb-00472fcb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


