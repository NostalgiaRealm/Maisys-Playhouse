
/* ==== __break @ 0045c27d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c27d-0045c27d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


