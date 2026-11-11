
/* ==== __break @ 0043ba8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba8d-0043ba8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


