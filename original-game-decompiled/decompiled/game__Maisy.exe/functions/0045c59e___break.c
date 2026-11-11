
/* ==== __break @ 0045c59e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c59e-0045c59e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


