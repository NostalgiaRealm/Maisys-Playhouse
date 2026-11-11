
/* ==== __break @ 004178ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178ca-004178ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


