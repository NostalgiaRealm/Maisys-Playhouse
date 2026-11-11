
/* ==== __break @ 00479a1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a1d-00479a1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


