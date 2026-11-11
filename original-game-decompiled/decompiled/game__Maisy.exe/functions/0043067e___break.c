
/* ==== __break @ 0043067e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043067e-0043067e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


