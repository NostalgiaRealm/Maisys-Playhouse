
/* ==== __break @ 0042024f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042024f-0042024f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


