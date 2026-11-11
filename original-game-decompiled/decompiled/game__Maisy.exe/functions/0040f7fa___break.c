
/* ==== __break @ 0040f7fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f7fa-0040f7fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


