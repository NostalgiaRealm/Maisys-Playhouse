
/* ==== __break @ 1401a4ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4ca-1401a4ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


