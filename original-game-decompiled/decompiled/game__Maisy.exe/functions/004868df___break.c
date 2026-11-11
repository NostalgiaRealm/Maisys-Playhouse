
/* ==== __break @ 004868df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004868df-004868df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


