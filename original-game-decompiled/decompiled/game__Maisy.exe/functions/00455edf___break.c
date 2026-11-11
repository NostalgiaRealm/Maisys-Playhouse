
/* ==== __break @ 00455edf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00455edf-00455edf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


