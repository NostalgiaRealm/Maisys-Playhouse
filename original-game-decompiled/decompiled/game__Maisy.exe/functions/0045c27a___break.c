
/* ==== __break @ 0045c27a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c27a-0045c27a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


