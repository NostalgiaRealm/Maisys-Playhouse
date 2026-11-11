
/* ==== __break @ 00479bbd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bbd-00479bbd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


