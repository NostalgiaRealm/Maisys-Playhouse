
/* ==== __break @ 00493bac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493bac-00493bac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


