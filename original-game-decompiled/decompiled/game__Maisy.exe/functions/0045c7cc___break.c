
/* ==== __break @ 0045c7cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c7cc-0045c7cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


