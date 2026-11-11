
/* ==== __break @ 00479bac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bac-00479bac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


