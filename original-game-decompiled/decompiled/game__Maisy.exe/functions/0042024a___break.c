
/* ==== __break @ 0042024a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042024a-0042024a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


