
/* ==== __break @ 00412147 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00412147-00412147
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


