
/* ==== __break @ 00479baf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479baf-00479baf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


