
/* ==== __break @ 0042f93d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f93d-0042f93d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


