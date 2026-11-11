
/* ==== __break @ 00479bdf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bdf-00479bdf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


