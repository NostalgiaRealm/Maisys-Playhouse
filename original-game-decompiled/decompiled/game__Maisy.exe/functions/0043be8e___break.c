
/* ==== __break @ 0043be8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043be8e-0043be8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


