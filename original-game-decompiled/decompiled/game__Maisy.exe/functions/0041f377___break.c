
/* ==== __break @ 0041f377 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f377-0041f377
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


