
/* ==== __break @ 1400ce1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1f-1400ce1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


