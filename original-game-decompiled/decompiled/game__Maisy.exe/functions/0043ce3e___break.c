
/* ==== __break @ 0043ce3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ce3e-0043ce3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


