
/* ==== __break @ 0045029a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045029a-0045029a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


