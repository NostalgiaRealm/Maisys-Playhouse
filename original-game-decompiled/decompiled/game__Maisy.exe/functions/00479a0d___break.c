
/* ==== __break @ 00479a0d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a0d-00479a0d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


