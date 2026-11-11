
/* ==== __break @ 1400ce1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1e-1400ce1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


