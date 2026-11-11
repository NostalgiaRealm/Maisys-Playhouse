
/* ==== __break @ 00415329 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00415329-00415329
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


