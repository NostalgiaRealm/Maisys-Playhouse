
/* ==== __break @ 0042377d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042377d-0042377d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


