
/* ==== __break @ 0043cf17 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cf17-0043cf17
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


