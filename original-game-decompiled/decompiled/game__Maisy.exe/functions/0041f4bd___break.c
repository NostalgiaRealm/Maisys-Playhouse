
/* ==== __break @ 0041f4bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f4bd-0041f4bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


