
/* ==== __break @ 0042f9fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f9fa-0042f9fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


