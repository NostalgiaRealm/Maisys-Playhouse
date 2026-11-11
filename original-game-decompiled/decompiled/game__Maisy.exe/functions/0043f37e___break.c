
/* ==== __break @ 0043f37e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f37e-0043f37e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


