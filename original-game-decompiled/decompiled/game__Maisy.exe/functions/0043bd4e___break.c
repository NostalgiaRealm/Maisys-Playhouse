
/* ==== __break @ 0043bd4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd4e-0043bd4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


