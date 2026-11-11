
/* ==== __break @ 0042298f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042298f-0042298f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


