
/* ==== __break @ 00447e95 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447e95-00447e95
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


