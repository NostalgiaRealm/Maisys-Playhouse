
/* ==== __break @ 0044808e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044808e-0044808e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


