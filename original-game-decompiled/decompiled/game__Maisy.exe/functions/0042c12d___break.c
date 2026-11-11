
/* ==== __break @ 0042c12d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c12d-0042c12d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


