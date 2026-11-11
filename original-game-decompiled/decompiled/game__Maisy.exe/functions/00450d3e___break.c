
/* ==== __break @ 00450d3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450d3e-00450d3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


