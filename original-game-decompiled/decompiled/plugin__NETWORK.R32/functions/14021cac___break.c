
/* ==== __break @ 14021cac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cac-14021cac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


