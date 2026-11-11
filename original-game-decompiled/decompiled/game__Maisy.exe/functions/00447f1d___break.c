
/* ==== __break @ 00447f1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447f1d-00447f1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


