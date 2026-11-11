
/* ==== __break @ 00479a4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a4d-00479a4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


