
/* ==== __break @ 00479bdc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bdc-00479bdc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


