
/* ==== __break @ 00415159 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00415159-00415159
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


