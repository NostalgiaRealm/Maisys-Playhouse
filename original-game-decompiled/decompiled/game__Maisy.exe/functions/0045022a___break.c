
/* ==== __break @ 0045022a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045022a-0045022a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


