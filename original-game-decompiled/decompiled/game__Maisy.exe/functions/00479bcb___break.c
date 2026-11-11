
/* ==== __break @ 00479bcb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bcb-00479bcb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


