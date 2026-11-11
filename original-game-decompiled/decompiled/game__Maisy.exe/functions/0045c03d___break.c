
/* ==== __break @ 0045c03d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c03d-0045c03d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


