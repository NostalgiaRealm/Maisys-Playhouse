
/* ==== __break @ 00447f91 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447f91-00447f91
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


