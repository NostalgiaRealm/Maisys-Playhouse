
/* ==== __break @ 0043067a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043067a-0043067a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


