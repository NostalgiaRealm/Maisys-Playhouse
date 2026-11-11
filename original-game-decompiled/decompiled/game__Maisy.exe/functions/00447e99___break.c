
/* ==== __break @ 00447e99 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447e99-00447e99
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


