
/* ==== __break @ 00481eb4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481eb4-00481eb4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


