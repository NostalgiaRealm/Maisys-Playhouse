
/* ==== __break @ 00481eb7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481eb7-00481eb7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


