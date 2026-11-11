
/* ==== __break @ 0045c29f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c29f-0045c29f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


