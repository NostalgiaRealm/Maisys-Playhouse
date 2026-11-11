
/* ==== __break @ 0043cf18 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cf18-0043cf18
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


