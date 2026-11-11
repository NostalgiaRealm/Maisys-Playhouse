
/* ==== __break @ 004584ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584ca-004584ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


