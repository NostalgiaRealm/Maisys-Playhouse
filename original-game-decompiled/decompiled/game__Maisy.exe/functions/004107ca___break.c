
/* ==== __break @ 004107ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107ca-004107ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


