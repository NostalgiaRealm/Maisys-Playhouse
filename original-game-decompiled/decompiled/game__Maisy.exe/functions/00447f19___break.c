
/* ==== __break @ 00447f19 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447f19-00447f19
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


