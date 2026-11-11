
/* ==== __break @ 00415327 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00415327-00415327
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


