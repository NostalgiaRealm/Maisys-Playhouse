
/* ==== __break @ 004304ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304ca-004304ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


