
/* ==== __break @ 1401bfa7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa7-1401bfa7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


