
/* ==== __break @ 00479a0b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a0b-00479a0b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


