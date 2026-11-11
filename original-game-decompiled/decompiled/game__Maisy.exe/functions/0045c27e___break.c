
/* ==== __break @ 0045c27e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c27e-0045c27e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


