
/* ==== __break @ 0042377f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042377f-0042377f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


