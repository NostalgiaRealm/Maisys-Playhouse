
/* ==== __break @ 0042ad5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042ad5f-0042ad5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


