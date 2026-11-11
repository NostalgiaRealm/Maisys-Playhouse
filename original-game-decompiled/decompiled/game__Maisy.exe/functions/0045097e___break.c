
/* ==== __break @ 0045097e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045097e-0045097e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


