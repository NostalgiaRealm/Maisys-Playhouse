
/* ==== __break @ 0043ba8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba8e-0043ba8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


