
/* ==== __break @ 00437fff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00437fff-00437fff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


