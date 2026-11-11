
/* ==== __break @ 00479a0f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a0f-00479a0f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


