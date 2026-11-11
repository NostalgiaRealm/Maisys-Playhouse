
/* ==== __break @ 004720ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720ca-004720ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


