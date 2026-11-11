
/* ==== __break @ 00422c3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00422c3e-00422c3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


