
/* ==== __break @ 0042f93e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f93e-0042f93e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


