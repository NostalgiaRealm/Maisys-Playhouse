
/* ==== __break @ 0042f9fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f9fb-0042f9fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


