
/* ==== __break @ 00479a5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a5e-00479a5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


