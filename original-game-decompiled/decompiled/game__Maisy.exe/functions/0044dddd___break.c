
/* ==== __break @ 0044dddd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dddd-0044dddd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


