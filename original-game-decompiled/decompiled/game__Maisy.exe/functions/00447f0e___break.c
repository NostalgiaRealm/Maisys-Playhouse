
/* ==== __break @ 00447f0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447f0e-00447f0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


