
/* ==== __break @ 00447e1a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447e1a-00447e1a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


