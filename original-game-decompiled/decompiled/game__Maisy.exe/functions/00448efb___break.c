
/* ==== __break @ 00448efb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448efb-00448efb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


