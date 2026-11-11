
/* ==== __break @ 00479bb9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bb9-00479bb9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


