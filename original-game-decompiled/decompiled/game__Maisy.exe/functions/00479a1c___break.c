
/* ==== __break @ 00479a1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a1c-00479a1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


