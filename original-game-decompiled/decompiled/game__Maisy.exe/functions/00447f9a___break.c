
/* ==== __break @ 00447f9a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447f9a-00447f9a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


