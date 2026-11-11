
/* ==== __break @ 0045c7cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c7cb-0045c7cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


