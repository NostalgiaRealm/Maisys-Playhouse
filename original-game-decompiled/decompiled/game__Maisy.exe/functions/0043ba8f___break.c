
/* ==== __break @ 0043ba8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba8f-0043ba8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


