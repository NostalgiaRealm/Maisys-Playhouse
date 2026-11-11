
/* ==== __break @ 0043bd09 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd09-0043bd09
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


