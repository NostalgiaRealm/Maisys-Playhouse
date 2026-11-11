
/* ==== __break @ 0043d018 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d018-0043d018
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


