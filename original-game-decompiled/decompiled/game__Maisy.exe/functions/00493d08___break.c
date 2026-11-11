
/* ==== __break @ 00493d08 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493d08-00493d08
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


