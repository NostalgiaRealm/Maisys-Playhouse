
/* ==== __break @ 0045c3bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c3bf-0045c3bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


