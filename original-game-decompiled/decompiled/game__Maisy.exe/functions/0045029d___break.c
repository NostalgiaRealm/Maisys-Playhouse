
/* ==== __break @ 0045029d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045029d-0045029d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


