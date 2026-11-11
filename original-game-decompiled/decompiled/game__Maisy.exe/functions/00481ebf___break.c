
/* ==== __break @ 00481ebf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481ebf-00481ebf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


