
/* ==== __break @ 0045c59f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c59f-0045c59f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


