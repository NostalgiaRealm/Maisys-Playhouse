
/* ==== __break @ 14020e2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e2e-14020e2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


