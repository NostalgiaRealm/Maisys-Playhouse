
/* ==== __break @ 00441acb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441acb-00441acb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


