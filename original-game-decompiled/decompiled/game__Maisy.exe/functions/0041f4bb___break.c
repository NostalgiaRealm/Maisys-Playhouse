
/* ==== __break @ 0041f4bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f4bb-0041f4bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


