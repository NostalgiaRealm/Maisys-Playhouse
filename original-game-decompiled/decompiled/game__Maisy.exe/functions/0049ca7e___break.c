
/* ==== __break @ 0049ca7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ca7e-0049ca7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


