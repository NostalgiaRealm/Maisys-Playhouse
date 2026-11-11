
/* ==== __break @ 0042f93a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f93a-0042f93a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


