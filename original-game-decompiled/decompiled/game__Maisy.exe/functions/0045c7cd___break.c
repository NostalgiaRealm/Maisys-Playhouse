
/* ==== __break @ 0045c7cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c7cd-0045c7cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


