
/* ==== __break @ 00448edf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448edf-00448edf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


