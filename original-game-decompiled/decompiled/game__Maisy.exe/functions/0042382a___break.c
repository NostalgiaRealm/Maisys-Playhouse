
/* ==== __break @ 0042382a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042382a-0042382a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


