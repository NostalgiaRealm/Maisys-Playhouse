
/* ==== __break @ 00493d07 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493d07-00493d07
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


