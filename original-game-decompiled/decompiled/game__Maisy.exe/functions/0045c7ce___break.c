
/* ==== __break @ 0045c7ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c7ce-0045c7ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


