
/* ==== __break @ 0045c7cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c7cf-0045c7cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


