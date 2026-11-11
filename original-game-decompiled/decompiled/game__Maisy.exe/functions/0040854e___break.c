
/* ==== __break @ 0040854e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040854e-0040854e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


