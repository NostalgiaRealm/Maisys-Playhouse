
/* ==== __break @ 0045c278 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c278-0045c278
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


