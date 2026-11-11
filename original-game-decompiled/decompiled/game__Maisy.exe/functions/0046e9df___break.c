
/* ==== __break @ 0046e9df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9df-0046e9df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


