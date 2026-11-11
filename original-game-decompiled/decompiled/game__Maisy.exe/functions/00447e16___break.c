
/* ==== __break @ 00447e16 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447e16-00447e16
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


