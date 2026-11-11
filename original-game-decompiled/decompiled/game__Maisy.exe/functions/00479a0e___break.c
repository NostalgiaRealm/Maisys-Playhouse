
/* ==== __break @ 00479a0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a0e-00479a0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


