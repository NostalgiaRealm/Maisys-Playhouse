
/* ==== __break @ 00494fee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494fee-00494fee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


