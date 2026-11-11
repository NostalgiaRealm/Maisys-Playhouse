
/* ==== __break @ 0045c29e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c29e-0045c29e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


