
/* ==== __break @ 0049fa1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049fa1d-0049fa1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


