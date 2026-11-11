
/* ==== __break @ 0045c00d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c00d-0045c00d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


