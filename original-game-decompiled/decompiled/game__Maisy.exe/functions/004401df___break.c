
/* ==== __break @ 004401df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004401df-004401df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


