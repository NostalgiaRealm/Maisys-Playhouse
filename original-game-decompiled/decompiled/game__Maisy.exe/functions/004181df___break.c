
/* ==== __break @ 004181df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004181df-004181df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


