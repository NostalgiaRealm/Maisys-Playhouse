
/* ==== __break @ 00415325 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00415325-00415325
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


