
/* ==== __break @ 0041f4be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f4be-0041f4be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


