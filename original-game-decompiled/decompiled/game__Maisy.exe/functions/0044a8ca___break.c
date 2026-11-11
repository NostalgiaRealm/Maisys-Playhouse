
/* ==== __break @ 0044a8ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a8ca-0044a8ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


