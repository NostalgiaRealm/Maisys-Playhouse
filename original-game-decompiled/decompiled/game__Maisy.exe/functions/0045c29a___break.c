
/* ==== __break @ 0045c29a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c29a-0045c29a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


