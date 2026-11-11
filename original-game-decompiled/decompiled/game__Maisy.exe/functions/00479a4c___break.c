
/* ==== __break @ 00479a4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a4c-00479a4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


