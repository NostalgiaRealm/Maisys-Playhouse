
/* ==== __break @ 00447f97 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447f97-00447f97
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


