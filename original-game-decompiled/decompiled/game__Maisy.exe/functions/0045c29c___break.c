
/* ==== __break @ 0045c29c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c29c-0045c29c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


