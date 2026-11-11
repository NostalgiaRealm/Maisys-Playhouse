
/* ==== __break @ 0041903e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041903e-0041903e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


