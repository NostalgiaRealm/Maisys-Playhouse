
/* ==== __break @ 00415326 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00415326-00415326
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


