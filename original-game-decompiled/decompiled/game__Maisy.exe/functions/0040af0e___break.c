
/* ==== __break @ 0040af0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040af0e-0040af0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


