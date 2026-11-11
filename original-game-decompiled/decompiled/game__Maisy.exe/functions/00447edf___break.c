
/* ==== __break @ 00447edf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447edf-00447edf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


