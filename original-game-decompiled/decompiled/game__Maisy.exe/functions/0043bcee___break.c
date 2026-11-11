
/* ==== __break @ 0043bcee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bcee-0043bcee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


