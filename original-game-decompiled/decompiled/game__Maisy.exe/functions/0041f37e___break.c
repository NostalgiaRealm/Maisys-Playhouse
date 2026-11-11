
/* ==== __break @ 0041f37e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f37e-0041f37e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


