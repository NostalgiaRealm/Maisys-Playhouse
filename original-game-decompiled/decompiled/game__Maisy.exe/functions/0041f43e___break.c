
/* ==== __break @ 0041f43e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f43e-0041f43e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


