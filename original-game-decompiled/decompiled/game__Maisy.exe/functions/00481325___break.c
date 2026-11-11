
/* ==== __break @ 00481325 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481325-00481325
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


