
/* ==== __break @ 14008a0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a0e-14008a0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


