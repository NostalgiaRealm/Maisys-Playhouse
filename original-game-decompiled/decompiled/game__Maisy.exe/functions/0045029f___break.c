
/* ==== __break @ 0045029f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045029f-0045029f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


