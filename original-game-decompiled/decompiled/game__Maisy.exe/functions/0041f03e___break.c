
/* ==== __break @ 0041f03e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f03e-0041f03e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


