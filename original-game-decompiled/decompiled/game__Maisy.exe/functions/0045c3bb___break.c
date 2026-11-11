
/* ==== __break @ 0045c3bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c3bb-0045c3bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


