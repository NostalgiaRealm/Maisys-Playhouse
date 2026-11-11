
/* ==== __break @ 0044da5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044da5e-0044da5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


