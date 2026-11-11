
/* ==== __break @ 0043bd08 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd08-0043bd08
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


