
/* ==== __break @ 0048bb6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048bb6e-0048bb6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


