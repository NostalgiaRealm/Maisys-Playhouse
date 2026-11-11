
/* ==== __break @ 0043bc5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bc5e-0043bc5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


