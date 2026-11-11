
/* ==== __break @ 0045ad8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ad8e-0045ad8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


