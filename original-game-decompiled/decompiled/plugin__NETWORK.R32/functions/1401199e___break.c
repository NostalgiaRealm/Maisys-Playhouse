
/* ==== __break @ 1401199e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401199e-1401199e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


