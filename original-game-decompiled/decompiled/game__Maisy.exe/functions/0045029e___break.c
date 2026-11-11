
/* ==== __break @ 0045029e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045029e-0045029e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


