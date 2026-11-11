
/* ==== __break @ 14022a5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5d-14022a5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


