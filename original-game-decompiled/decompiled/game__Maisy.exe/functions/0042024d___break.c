
/* ==== __break @ 0042024d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042024d-0042024d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


